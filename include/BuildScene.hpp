#pragma once

#include <iostream>
#include <vector>

#include <glad/glad.h>
#include <glm/glm.hpp>

#include <constants.hpp>
#include <Camera.hpp>
#include <Shader.hpp>

using namespace std;

class BuildScene
{
    public:
        static void set_viewport(SCENE, int, int);
        static void set_projection(SCENE, glm::mat4 &, Camera, int, int, float, float);

        static void setup_boundary(unsigned int &);
        static void render_boundary(SCENE, unsigned int, Shader, unsigned int, float);

        static void setup_player(unsigned int &);
        static void render_player(SCENE, unsigned int, Shader, glm::vec3);

        static void setup_ball(unsigned int &, int &);
        static void render_ball(Shader, unsigned int, glm::vec3, float, int, CULLING);

        static void setup_view_volume(unsigned int &);
        static void render_view_volume(SCENE, unsigned int, Shader, glm::vec3, float, float, float, float);

        static void setup_texture(unsigned int &, string);
};