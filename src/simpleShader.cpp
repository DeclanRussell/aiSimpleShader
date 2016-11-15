#include <ai.h>
#include <cstring>
// A Simple Shader
AI_SHADER_NODE_EXPORT_METHODS(SimpleMethods)
 
namespace
{
 
enum SimpleParams { p_color };
 
}
 
node_parameters
{
    AiParameterRGB("constantColor", 0.7f, 0.7f, 0.7f);
}
 
node_initialize
{
}
 
node_update
{
}
 
node_finish
{
}
 
shader_evaluate
{
    AtColor color = AiShaderEvalParamRGB(p_color);
    sg->out.RGB = color;
}
 
node_loader
{
    if (i > 0)
        return false;
 
    node->methods        = SimpleMethods;
    node->output_type    = AI_TYPE_RGB;
    node->name           = "simple";
    node->node_type      = AI_NODE_SHADER;
    strcpy(node->version, AI_VERSION);
    return true;
}
