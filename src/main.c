#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorts.h"
#include "stats.h"
#include "utils.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define WIDTH 1280
#define HEIGHT 720
#define SIZE 100000

GLfloat map(GLfloat value, GLfloat min, GLfloat max, GLfloat a, GLfloat b) {
    return a + (value - min) * (b - a) / (max - min);
}

GLfloat lerp(GLfloat a, GLfloat b, GLfloat t) {
    return a + t * (b - a);
}

GLfloat color(GLfloat x, GLfloat y) {
    return lerp(map(x, 0.0f, WIDTH, 0.0f, 1.0f),
                map(y, 0.0f, HEIGHT, 0.0f, 1.0f),
                (x + y) / (WIDTH + HEIGHT));
}

void draw(const int array[], int size) {
    for (int i = 0; i < size; ++i) {
        GLfloat bar_width = WIDTH / (float) size;
        GLfloat bar_height = array[i];
        GLfloat x = i * bar_width;
        GLfloat y = 0;

        glBegin(GL_QUADS);

        glColor3f(color(x, y), color(x, y), color(x, y));
        glVertex2f(x, y);

        glColor3f(color(x + bar_width, y), color(x + bar_width, y), color(x + bar_width, y));
        glVertex2f(x + bar_width, y);

        glColor3f(color(x + bar_width, y + bar_height), color(x + bar_width, y + bar_height), color(x + bar_width, y + bar_height));
        glVertex2f(x + bar_width, y + bar_height);

        glColor3f(color(x, y + bar_height), color(x, y + bar_height), color(x, y + bar_height));
        glVertex2f(x, y + bar_height);

        glEnd();
    }
}

int main(int argc, char *argv[]) {

    int array[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; ++i) {
        array[i] = rand() % HEIGHT;
    }

    glfwInit();
    glewInit();

    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "Sorting Visualization", NULL, NULL);

    glfwMakeContextCurrent(window);

    glViewport(0, 0, WIDTH, HEIGHT);
    glOrtho(0, WIDTH, 0, HEIGHT, -1, 1);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        draw(array, SIZE);

        glfwSwapBuffers(window);
        glfwSwapInterval(1);

        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return EXIT_SUCCESS;
}
