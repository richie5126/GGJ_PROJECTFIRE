// Compiled shader for iPhone, iPod Touch and iPad

//////////////////////////////////////////////////////////////////////////
// 
// NOTE: This is *not* a valid shader file, the contents are provided just
// for information and for debugging purposes only.
// 
//////////////////////////////////////////////////////////////////////////
// Skipping shader variants that would not be included into build of current scene.

Shader "Mobile/Particles/Additive" {
Properties {
 _MainTex ("Particle Texture", 2D) = "white" { }
}
SubShader { 
 Tags { "QUEUE"="Transparent" "IGNOREPROJECTOR"="true" "RenderType"="Transparent" "PreviewType"="Plane" }


 // Stats for Vertex shader:
 //         gles: 1 math, 1 texture
 Pass {
  Tags { "QUEUE"="Transparent" "IGNOREPROJECTOR"="true" "RenderType"="Transparent" "PreviewType"="Plane" }
  ZWrite Off
  Cull Off
  Blend SrcAlpha One
  //////////////////////////////////
  //                              //
  //      Compiled programs       //
  //                              //
  //////////////////////////////////
//////////////////////////////////////////////////////
No keywords set in this variant.
-- Hardware tier variant: Tier 1
-- Vertex shader for "gles":
// Stats: 1 math, 1 textures
Shader Disassembly:
#version 100

#ifdef VERTEX
attribute vec4 _glesVertex;
attribute vec4 _glesColor;
attribute vec4 _glesMultiTexCoord0;
uniform highp mat4 glstate_matrix_mvp;
uniform highp vec4 _MainTex_ST;
varying lowp vec4 xlv_COLOR0;
varying highp vec2 xlv_TEXCOORD0;
void main ()
{
  lowp vec4 tmpvar_1;
  mediump vec4 tmpvar_2;
  tmpvar_2 = clamp (_glesColor, 0.0, 1.0);
  tmpvar_1 = tmpvar_2;
  highp vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = _glesVertex.xyz;
  xlv_COLOR0 = tmpvar_1;
  xlv_TEXCOORD0 = ((_glesMultiTexCoord0.xy * _MainTex_ST.xy) + _MainTex_ST.zw);
  gl_Position = (glstate_matrix_mvp * tmpvar_3);
}


#endif
#ifdef FRAGMENT
uniform sampler2D _MainTex;
varying lowp vec4 xlv_COLOR0;
varying highp vec2 xlv_TEXCOORD0;
void main ()
{
  lowp vec4 tmpvar_1;
  tmpvar_1 = (texture2D (_MainTex, xlv_TEXCOORD0) * xlv_COLOR0);
  gl_FragData[0] = tmpvar_1;
}


#endif


-- Hardware tier variant: Tier 1
-- Fragment shader for "gles":
Shader Disassembly:
// All GLSL source is contained within the vertex program

-- Hardware tier variant: Tier 2
-- Vertex shader for "gles":
// Stats: 1 math, 1 textures
Shader Disassembly:
#version 100

#ifdef VERTEX
attribute vec4 _glesVertex;
attribute vec4 _glesColor;
attribute vec4 _glesMultiTexCoord0;
uniform highp mat4 glstate_matrix_mvp;
uniform highp vec4 _MainTex_ST;
varying lowp vec4 xlv_COLOR0;
varying highp vec2 xlv_TEXCOORD0;
void main ()
{
  lowp vec4 tmpvar_1;
  mediump vec4 tmpvar_2;
  tmpvar_2 = clamp (_glesColor, 0.0, 1.0);
  tmpvar_1 = tmpvar_2;
  highp vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = _glesVertex.xyz;
  xlv_COLOR0 = tmpvar_1;
  xlv_TEXCOORD0 = ((_glesMultiTexCoord0.xy * _MainTex_ST.xy) + _MainTex_ST.zw);
  gl_Position = (glstate_matrix_mvp * tmpvar_3);
}


#endif
#ifdef FRAGMENT
uniform sampler2D _MainTex;
varying lowp vec4 xlv_COLOR0;
varying highp vec2 xlv_TEXCOORD0;
void main ()
{
  lowp vec4 tmpvar_1;
  tmpvar_1 = (texture2D (_MainTex, xlv_TEXCOORD0) * xlv_COLOR0);
  gl_FragData[0] = tmpvar_1;
}


#endif


-- Hardware tier variant: Tier 2
-- Fragment shader for "gles":
Shader Disassembly:
// All GLSL source is contained within the vertex program

-- Hardware tier variant: Tier 3
-- Vertex shader for "gles":
// Stats: 1 math, 1 textures
Shader Disassembly:
#version 100

#ifdef VERTEX
attribute vec4 _glesVertex;
attribute vec4 _glesColor;
attribute vec4 _glesMultiTexCoord0;
uniform highp mat4 glstate_matrix_mvp;
uniform highp vec4 _MainTex_ST;
varying lowp vec4 xlv_COLOR0;
varying highp vec2 xlv_TEXCOORD0;
void main ()
{
  lowp vec4 tmpvar_1;
  mediump vec4 tmpvar_2;
  tmpvar_2 = clamp (_glesColor, 0.0, 1.0);
  tmpvar_1 = tmpvar_2;
  highp vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = _glesVertex.xyz;
  xlv_COLOR0 = tmpvar_1;
  xlv_TEXCOORD0 = ((_glesMultiTexCoord0.xy * _MainTex_ST.xy) + _MainTex_ST.zw);
  gl_Position = (glstate_matrix_mvp * tmpvar_3);
}


#endif
#ifdef FRAGMENT
uniform sampler2D _MainTex;
varying lowp vec4 xlv_COLOR0;
varying highp vec2 xlv_TEXCOORD0;
void main ()
{
  lowp vec4 tmpvar_1;
  tmpvar_1 = (texture2D (_MainTex, xlv_TEXCOORD0) * xlv_COLOR0);
  gl_FragData[0] = tmpvar_1;
}


#endif


-- Hardware tier variant: Tier 3
-- Fragment shader for "gles":
Shader Disassembly:
// All GLSL source is contained within the vertex program

-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord"

Constant Buffer "Globals" (80 bytes) on slot 0 {
  Matrix4x4 glstate_matrix_mvp at 0
  Vector4 _MainTex_ST at 64
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;
struct Globals_Type
{
    float4 hlslcc_mtx4x4glstate_matrix_mvp[4];
    float4 _MainTex_ST;
};

struct Mtl_VertexIn
{
    float3 POSITION0 [[ attribute(0) ]] ;
    half4 COLOR0 [[ attribute(1) ]] ;
    float3 TEXCOORD0 [[ attribute(2) ]] ;
};

struct Mtl_VertexOut
{
    half4 COLOR0 [[ user(COLOR0) ]];
    float2 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 mtl_Position [[ position ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant Globals_Type& Globals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    u_xlat16_0 = input.COLOR0;
    u_xlat16_0 = clamp(u_xlat16_0, 0.0h, 1.0h);
    output.COLOR0 = u_xlat16_0;
    output.TEXCOORD0.xy = input.TEXCOORD0.xy * Globals._MainTex_ST.xy + Globals._MainTex_ST.zw;
    u_xlat0 = input.POSITION0.yyyy * Globals.hlslcc_mtx4x4glstate_matrix_mvp[1];
    u_xlat0 = Globals.hlslcc_mtx4x4glstate_matrix_mvp[0] * input.POSITION0.xxxx + u_xlat0;
    u_xlat0 = Globals.hlslcc_mtx4x4glstate_matrix_mvp[2] * input.POSITION0.zzzz + u_xlat0;
    output.mtl_Position = u_xlat0 + Globals.hlslcc_mtx4x4glstate_matrix_mvp[3];
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;
struct Mtl_FragmentIn
{
    half4 COLOR0 [[ user(COLOR0) ]] ;
    float2 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(0) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    texture2d<half, access::sample > _MainTex [[ texture (0) ]] ,
    sampler sampler_MainTex [[ sampler (0) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    half4 u_xlat16_0;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    output.SV_Target0 = half4(u_xlat16_0 * input.COLOR0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord"

Constant Buffer "Globals" (80 bytes) on slot 0 {
  Matrix4x4 glstate_matrix_mvp at 0
  Vector4 _MainTex_ST at 64
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;
struct Globals_Type
{
    float4 hlslcc_mtx4x4glstate_matrix_mvp[4];
    float4 _MainTex_ST;
};

struct Mtl_VertexIn
{
    float3 POSITION0 [[ attribute(0) ]] ;
    half4 COLOR0 [[ attribute(1) ]] ;
    float3 TEXCOORD0 [[ attribute(2) ]] ;
};

struct Mtl_VertexOut
{
    half4 COLOR0 [[ user(COLOR0) ]];
    float2 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 mtl_Position [[ position ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant Globals_Type& Globals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    u_xlat16_0 = input.COLOR0;
    u_xlat16_0 = clamp(u_xlat16_0, 0.0h, 1.0h);
    output.COLOR0 = u_xlat16_0;
    output.TEXCOORD0.xy = input.TEXCOORD0.xy * Globals._MainTex_ST.xy + Globals._MainTex_ST.zw;
    u_xlat0 = input.POSITION0.yyyy * Globals.hlslcc_mtx4x4glstate_matrix_mvp[1];
    u_xlat0 = Globals.hlslcc_mtx4x4glstate_matrix_mvp[0] * input.POSITION0.xxxx + u_xlat0;
    u_xlat0 = Globals.hlslcc_mtx4x4glstate_matrix_mvp[2] * input.POSITION0.zzzz + u_xlat0;
    output.mtl_Position = u_xlat0 + Globals.hlslcc_mtx4x4glstate_matrix_mvp[3];
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;
struct Mtl_FragmentIn
{
    half4 COLOR0 [[ user(COLOR0) ]] ;
    float2 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(0) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    texture2d<half, access::sample > _MainTex [[ texture (0) ]] ,
    sampler sampler_MainTex [[ sampler (0) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    half4 u_xlat16_0;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    output.SV_Target0 = half4(u_xlat16_0 * input.COLOR0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord"

Constant Buffer "Globals" (80 bytes) on slot 0 {
  Matrix4x4 glstate_matrix_mvp at 0
  Vector4 _MainTex_ST at 64
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;
struct Globals_Type
{
    float4 hlslcc_mtx4x4glstate_matrix_mvp[4];
    float4 _MainTex_ST;
};

struct Mtl_VertexIn
{
    float3 POSITION0 [[ attribute(0) ]] ;
    half4 COLOR0 [[ attribute(1) ]] ;
    float3 TEXCOORD0 [[ attribute(2) ]] ;
};

struct Mtl_VertexOut
{
    half4 COLOR0 [[ user(COLOR0) ]];
    float2 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 mtl_Position [[ position ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant Globals_Type& Globals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    u_xlat16_0 = input.COLOR0;
    u_xlat16_0 = clamp(u_xlat16_0, 0.0h, 1.0h);
    output.COLOR0 = u_xlat16_0;
    output.TEXCOORD0.xy = input.TEXCOORD0.xy * Globals._MainTex_ST.xy + Globals._MainTex_ST.zw;
    u_xlat0 = input.POSITION0.yyyy * Globals.hlslcc_mtx4x4glstate_matrix_mvp[1];
    u_xlat0 = Globals.hlslcc_mtx4x4glstate_matrix_mvp[0] * input.POSITION0.xxxx + u_xlat0;
    u_xlat0 = Globals.hlslcc_mtx4x4glstate_matrix_mvp[2] * input.POSITION0.zzzz + u_xlat0;
    output.mtl_Position = u_xlat0 + Globals.hlslcc_mtx4x4glstate_matrix_mvp[3];
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;
struct Mtl_FragmentIn
{
    half4 COLOR0 [[ user(COLOR0) ]] ;
    float2 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(0) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    texture2d<half, access::sample > _MainTex [[ texture (0) ]] ,
    sampler sampler_MainTex [[ sampler (0) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    half4 u_xlat16_0;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    output.SV_Target0 = half4(u_xlat16_0 * input.COLOR0);
    return output;
}


 }
}
}