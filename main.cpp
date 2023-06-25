#include<iostream>
using namespace std;
#include<GL/glew.h>
#include<GLFW/glfw3.h>

int main(void) {
    GLFWwindow* window;
    if(!glfwInit())
        return -1;
    window = glfwCreateWindow(640, 480, "Black Hole", NULL, NULL);
    if(!window) {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    while(!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);



        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}