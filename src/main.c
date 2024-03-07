#include <stdio.h>
#include <stdlib.h>
#include "sorts.h"
#include "stats.h"
#include "utils.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define WIDTH 1280
#define HEIGHT 720

void draw(const int array[], int size) {
    for (int i = 0; i < size; i++) {
        float bar_width = WIDTH / (float) size;
        float bar_height = array[i];
        float x = i * bar_width;
        float y = 0;

        glBegin(GL_QUADS);
        glColor3d(0.1, 0.2,  0.3);
        glVertex2f(x, 0);
        //glColor3d(0.0, 0.0, 0.0);
        glVertex2f(x + bar_width, y);
        //glColor3d(0.0, 0.0, 0.0);
        glVertex2f(x + bar_width, y + bar_height);
        //glColor3d(0.0, 0.0, 0.0);
        glVertex2f(x, y);
        glEnd();
    }
}

int main(int argc, char *argv[]) {

    glfwInit();
    glewInit();

    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "Sorting Visualization", NULL, NULL);

    glfwMakeContextCurrent(window);

    glViewport(0, 0, WIDTH, HEIGHT);
    glOrtho(0, WIDTH, 0, HEIGHT, -1, 1);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwSwapInterval(1);

        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return EXIT_SUCCESS;
}
