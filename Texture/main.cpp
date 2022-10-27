//
//  main.cpp
//  Texture
//
//  Created by ShuYang Yan on 2022/10/27.
//
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main(int argc, const char * argv[]) {
    //initial
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif
    
    GLFWwindow *window = glfwCreateWindow(800, 600, "test", NULL, NULL);
    
    if (! window) {
        std::cout<<"ERROR TO CREATE WINDOW"<<std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    
    while (! glfwWindowShouldClose(window)) {
        //input
        
        //render
        
        
        
        glfwSwapBuffers(window);
        glfwPollEvents();
        
    }
    glfwTerminate();
    return 0;
}
