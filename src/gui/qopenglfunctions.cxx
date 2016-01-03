// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qopenglfunctions.h
// dst-file: /src/gui/qopenglfunctions.cxx
//

// header block begin =>
#include <qopenglfunctions.h>

extern "C" {

int QOpenGLFunctionsPrivate_Class_Size()
{
  return sizeof(QOpenGLFunctionsPrivate);
}

int QOpenGLFunctions_Class_Size()
{
  return sizeof(QOpenGLFunctions);
}

// ~QOpenGLFunctions()
void dedtor_ZN16QOpenGLFunctionsD0Ev(QOpenGLFunctions* that)
{
  QOpenGLFunctions* rthis = (QOpenGLFunctions*)that;
  delete rthis;
}

  // proto:  void QOpenGLFunctions::glBindAttribLocation(GLuint program, GLuint index, const char * name);
void demth_ZN16QOpenGLFunctions20glBindAttribLocationEjjPKc(void *that, unsigned int program, unsigned int index, const char * name)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBindAttribLocation(program, index, name);
}

  // proto:  void QOpenGLFunctions::glGenFramebuffers(GLsizei n, GLuint * framebuffers);
void demth_ZN16QOpenGLFunctions17glGenFramebuffersEiPj(void *that, int n, GLuint * framebuffers)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGenFramebuffers(n, framebuffers);
}

  // proto:  void QOpenGLFunctions::glUniform3iv(GLint location, GLsizei count, const GLint * v);
void demth_ZN16QOpenGLFunctions12glUniform3ivEiiPKi(void *that, int location, int count, const GLint * v)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform3iv(location, count, v);
}

  // proto:  void QOpenGLFunctions::glVertexAttrib4fv(GLuint indx, const GLfloat * values);
void demth_ZN16QOpenGLFunctions17glVertexAttrib4fvEjPKf(void *that, unsigned int indx, const GLfloat * values)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glVertexAttrib4fv(indx, values);
}

  // proto:  GLboolean QOpenGLFunctions::glIsBuffer(GLuint buffer);
GLboolean demth_ZN16QOpenGLFunctions10glIsBufferEj(void *that, unsigned int buffer)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glIsBuffer(buffer);
}

  // proto:  void QOpenGLFunctions::glLineWidth(GLfloat width);
void demth_ZN16QOpenGLFunctions11glLineWidthEf(void *that, float width)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glLineWidth(width);
}

  // proto:  void QOpenGLFunctions::glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
void demth_ZN16QOpenGLFunctions22glCompressedTexImage2DEjijiiiiPKv(void *that, unsigned int target, int level, unsigned int internalformat, int width, int height, int border, int imageSize, const void * data)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

  // proto:  void QOpenGLFunctions::glDepthRangef(GLclampf zNear, GLclampf zFar);
void demth_ZN16QOpenGLFunctions13glDepthRangefEff(void *that, float zNear, float zFar)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDepthRangef(zNear, zFar);
}

  // proto:  void QOpenGLFunctions::glVertexAttrib1fv(GLuint indx, const GLfloat * values);
void demth_ZN16QOpenGLFunctions17glVertexAttrib1fvEjPKf(void *that, unsigned int indx, const GLfloat * values)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glVertexAttrib1fv(indx, values);
}

  // proto:  void QOpenGLFunctions::glTexParameteriv(GLenum target, GLenum pname, const GLint * params);
void demth_ZN16QOpenGLFunctions16glTexParameterivEjjPKi(void *that, unsigned int target, unsigned int pname, const GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glTexParameteriv(target, pname, params);
}

  // proto:  void QOpenGLFunctions::glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
void demth_ZN16QOpenGLFunctions15glTexSubImage2DEjiiiiijjPKv(void *that, unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, unsigned int type, const GLvoid * pixels)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

  // proto:  void QOpenGLFunctions::glDeleteProgram(GLuint program);
void demth_ZN16QOpenGLFunctions15glDeleteProgramEj(void *that, unsigned int program)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDeleteProgram(program);
}

  // proto:  void QOpenGLFunctions::glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
void demth_ZN16QOpenGLFunctions23glBlendEquationSeparateEjj(void *that, unsigned int modeRGB, unsigned int modeAlpha)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBlendEquationSeparate(modeRGB, modeAlpha);
}

  // proto:  void QOpenGLFunctions::glStencilMaskSeparate(GLenum face, GLuint mask);
void demth_ZN16QOpenGLFunctions21glStencilMaskSeparateEjj(void *that, unsigned int face, unsigned int mask)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glStencilMaskSeparate(face, mask);
}

  // proto:  void QOpenGLFunctions::glDrawArrays(GLenum mode, GLint first, GLsizei count);
void demth_ZN16QOpenGLFunctions12glDrawArraysEjii(void *that, unsigned int mode, int first, int count)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDrawArrays(mode, first, count);
}

  // proto:  void QOpenGLFunctions::glFinish();
void demth_ZN16QOpenGLFunctions8glFinishEv(void *that)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glFinish();
}

  // proto:  void QOpenGLFunctions::glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer);
void demth_ZN16QOpenGLFunctions25glGetVertexAttribPointervEjjPPv(void *that, unsigned int index, unsigned int pname, void ** pointer)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetVertexAttribPointerv(index, pname, pointer);
}

  // proto:  void QOpenGLFunctions::glActiveTexture(GLenum texture);
void demth_ZN16QOpenGLFunctions15glActiveTextureEj(void *that, unsigned int texture)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glActiveTexture(texture);
}

  // proto:  void QOpenGLFunctions::glFrontFace(GLenum mode);
void demth_ZN16QOpenGLFunctions11glFrontFaceEj(void *that, unsigned int mode)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glFrontFace(mode);
}

  // proto:  void QOpenGLFunctions::glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
void demth_ZN16QOpenGLFunctions19glGetTexParameterfvEjjPf(void *that, unsigned int target, unsigned int pname, GLfloat * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetTexParameterfv(target, pname, params);
}

  // proto:  void QOpenGLFunctions::glPixelStorei(GLenum pname, GLint param);
void demth_ZN16QOpenGLFunctions13glPixelStoreiEji(void *that, unsigned int pname, int param)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glPixelStorei(pname, param);
}

  // proto:  void QOpenGLFunctions::glCullFace(GLenum mode);
void demth_ZN16QOpenGLFunctions10glCullFaceEj(void *that, unsigned int mode)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glCullFace(mode);
}

  // proto:  void QOpenGLFunctions::glGetShaderiv(GLuint shader, GLenum pname, GLint * params);
void demth_ZN16QOpenGLFunctions13glGetShaderivEjjPi(void *that, unsigned int shader, unsigned int pname, GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetShaderiv(shader, pname, params);
}

  // proto:  void QOpenGLFunctions::glUniform4i(GLint location, GLint x, GLint y, GLint z, GLint w);
void demth_ZN16QOpenGLFunctions11glUniform4iEiiiii(void *that, int location, int x, int y, int z, int w)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform4i(location, x, y, z, w);
}

  // proto:  void QOpenGLFunctions::glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
void demth_ZN16QOpenGLFunctions12glReadPixelsEiiiijjPv(void *that, int x, int y, int width, int height, unsigned int format, unsigned int type, GLvoid * pixels)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glReadPixels(x, y, width, height, format, type, pixels);
}

  // proto:  void QOpenGLFunctions::glTexParameteri(GLenum target, GLenum pname, GLint param);
void demth_ZN16QOpenGLFunctions15glTexParameteriEjji(void *that, unsigned int target, unsigned int pname, int param)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glTexParameteri(target, pname, param);
}

  // proto:  void QOpenGLFunctions::glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params);
void demth_ZN16QOpenGLFunctions19glGetVertexAttribivEjjPi(void *that, unsigned int index, unsigned int pname, GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetVertexAttribiv(index, pname, params);
}

  // proto:  void QOpenGLFunctions::glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void demth_ZN16QOpenGLFunctions12glClearColorEffff(void *that, float red, float green, float blue, float alpha)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glClearColor(red, green, blue, alpha);
}

  // proto:  void QOpenGLFunctions::glClearDepthf(GLclampf depth);
void demth_ZN16QOpenGLFunctions13glClearDepthfEf(void *that, float depth)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glClearDepthf(depth);
}

  // proto:  void QOpenGLFunctions::glUniform2i(GLint location, GLint x, GLint y);
void demth_ZN16QOpenGLFunctions11glUniform2iEiii(void *that, int location, int x, int y)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform2i(location, x, y);
}

  // proto:  void QOpenGLFunctions::glGenerateMipmap(GLenum target);
void demth_ZN16QOpenGLFunctions16glGenerateMipmapEj(void *that, unsigned int target)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGenerateMipmap(target);
}

  // proto:  void QOpenGLFunctions::glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
void demth_ZN16QOpenGLFunctions25glCompressedTexSubImage2DEjiiiiijiPKv(void *that, unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, int imageSize, const void * data)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

  // proto:  void QOpenGLFunctions::glUniform3i(GLint location, GLint x, GLint y, GLint z);
void demth_ZN16QOpenGLFunctions11glUniform3iEiiii(void *that, int location, int x, int y, int z)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform3i(location, x, y, z);
}

  // proto:  void QOpenGLFunctions::glGenTextures(GLsizei n, GLuint * textures);
void demth_ZN16QOpenGLFunctions13glGenTexturesEiPj(void *that, int n, GLuint * textures)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGenTextures(n, textures);
}

  // proto:  void QOpenGLFunctions::glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
void demth_ZN16QOpenGLFunctions26glGetShaderPrecisionFormatEjjPiS0_(void *that, unsigned int shadertype, unsigned int precisiontype, GLint * range, GLint * precision)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

  // proto:  void QOpenGLFunctions::glUniform4fv(GLint location, GLsizei count, const GLfloat * v);
void demth_ZN16QOpenGLFunctions12glUniform4fvEiiPKf(void *that, int location, int count, const GLfloat * v)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform4fv(location, count, v);
}

  // proto:  void QOpenGLFunctions::glGetProgramiv(GLuint program, GLenum pname, GLint * params);
void demth_ZN16QOpenGLFunctions14glGetProgramivEjjPi(void *that, unsigned int program, unsigned int pname, GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetProgramiv(program, pname, params);
}

  // proto:  void QOpenGLFunctions::glVertexAttrib2fv(GLuint indx, const GLfloat * values);
void demth_ZN16QOpenGLFunctions17glVertexAttrib2fvEjPKf(void *that, unsigned int indx, const GLfloat * values)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glVertexAttrib2fv(indx, values);
}

  // proto:  void QOpenGLFunctions::glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufsize, GLsizei * length, GLint * size, GLenum * type, char * name);
void demth_ZN16QOpenGLFunctions17glGetActiveAttribEjjiPiS0_PjPc(void *that, unsigned int program, unsigned int index, int bufsize, GLsizei * length, GLint * size, GLenum * type, char * name)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetActiveAttrib(program, index, bufsize, length, size, type, name);
}

  // proto:  GLboolean QOpenGLFunctions::glIsRenderbuffer(GLuint renderbuffer);
GLboolean demth_ZN16QOpenGLFunctions16glIsRenderbufferEj(void *that, unsigned int renderbuffer)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glIsRenderbuffer(renderbuffer);
}

  // proto:  void QOpenGLFunctions::glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void demth_ZN16QOpenGLFunctions19glCopyTexSubImage2DEjiiiiiii(void *that, unsigned int target, int level, int xoffset, int yoffset, int x, int y, int width, int height)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

  // proto:  void QOpenGLFunctions::glShaderSource(GLuint shader, GLsizei count, const char ** string, const GLint * length);
void demth_ZN16QOpenGLFunctions14glShaderSourceEjiPPKcPKi(void *that, unsigned int shader, int count, const char ** string, const GLint * length)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glShaderSource(shader, count, string, length);
}

  // proto:  void QOpenGLFunctions::glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params);
void demth_ZN16QOpenGLFunctions19glGetVertexAttribfvEjjPf(void *that, unsigned int index, unsigned int pname, GLfloat * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetVertexAttribfv(index, pname, params);
}

  // proto:  void QOpenGLFunctions::glDepthFunc(GLenum func);
void demth_ZN16QOpenGLFunctions11glDepthFuncEj(void *that, unsigned int func)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDepthFunc(func);
}

  // proto:  void QOpenGLFunctions::glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
void demth_ZN16QOpenGLFunctions12glTexImage2DEjiiiiijjPKv(void *that, unsigned int target, int level, int internalformat, int width, int height, int border, unsigned int format, unsigned int type, const GLvoid * pixels)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

  // proto:  void QOpenGLFunctions::glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers);
void demth_ZN16QOpenGLFunctions20glDeleteFramebuffersEiPKj(void *that, int n, const GLuint * framebuffers)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDeleteFramebuffers(n, framebuffers);
}

  // proto:  void QOpenGLFunctions::glHint(GLenum target, GLenum mode);
void demth_ZN16QOpenGLFunctions6glHintEjj(void *that, unsigned int target, unsigned int mode)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glHint(target, mode);
}

  // proto:  GLint QOpenGLFunctions::glGetUniformLocation(GLuint program, const char * name);
GLint demth_ZN16QOpenGLFunctions20glGetUniformLocationEjPKc(void *that, unsigned int program, const char * name)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glGetUniformLocation(program, name);
}

  // proto:  GLboolean QOpenGLFunctions::glIsFramebuffer(GLuint framebuffer);
GLboolean demth_ZN16QOpenGLFunctions15glIsFramebufferEj(void *that, unsigned int framebuffer)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glIsFramebuffer(framebuffer);
}

  // proto:  void QOpenGLFunctions::glUniform1fv(GLint location, GLsizei count, const GLfloat * v);
void demth_ZN16QOpenGLFunctions12glUniform1fvEiiPKf(void *that, int location, int count, const GLfloat * v)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform1fv(location, count, v);
}

  // proto:  const GLubyte * QOpenGLFunctions::glGetString(GLenum name);
const GLubyte * demth_ZN16QOpenGLFunctions11glGetStringEj(void *that, unsigned int name)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glGetString(name);
}

  // proto:  void QOpenGLFunctions::glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
void demth_ZN16QOpenGLFunctions18glUniformMatrix2fvEiihPKf(void *that, int location, int count, unsigned char transpose, const GLfloat * value)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniformMatrix2fv(location, count, transpose, value);
}

  // proto:  void QOpenGLFunctions::glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
void demth_ZN16QOpenGLFunctions18glUniformMatrix3fvEiihPKf(void *that, int location, int count, unsigned char transpose, const GLfloat * value)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniformMatrix3fv(location, count, transpose, value);
}

  // proto:  void QOpenGLFunctions::glBindBuffer(GLenum target, GLuint buffer);
void demth_ZN16QOpenGLFunctions12glBindBufferEjj(void *that, unsigned int target, unsigned int buffer)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBindBuffer(target, buffer);
}

  // proto:  void QOpenGLFunctions::glUniform2f(GLint location, GLfloat x, GLfloat y);
void demth_ZN16QOpenGLFunctions11glUniform2fEiff(void *that, int location, float x, float y)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform2f(location, x, y);
}

  // proto:  void QOpenGLFunctions::glUniform3fv(GLint location, GLsizei count, const GLfloat * v);
void demth_ZN16QOpenGLFunctions12glUniform3fvEiiPKf(void *that, int location, int count, const GLfloat * v)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform3fv(location, count, v);
}

  // proto:  void QOpenGLFunctions::glUniform2fv(GLint location, GLsizei count, const GLfloat * v);
void demth_ZN16QOpenGLFunctions12glUniform2fvEiiPKf(void *that, int location, int count, const GLfloat * v)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform2fv(location, count, v);
}

  // proto:  void QOpenGLFunctions::glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params);
void demth_ZN16QOpenGLFunctions28glGetRenderbufferParameterivEjjPi(void *that, unsigned int target, unsigned int pname, GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetRenderbufferParameteriv(target, pname, params);
}

  // proto:  void QOpenGLFunctions::glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params);
void demth_ZN16QOpenGLFunctions22glGetBufferParameterivEjjPi(void *that, unsigned int target, unsigned int pname, GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetBufferParameteriv(target, pname, params);
}

  // proto:  void QOpenGLFunctions::glUniform1iv(GLint location, GLsizei count, const GLint * v);
void demth_ZN16QOpenGLFunctions12glUniform1ivEiiPKi(void *that, int location, int count, const GLint * v)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform1iv(location, count, v);
}

  // proto:  void QOpenGLFunctions::glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void demth_ZN16QOpenGLFunctions12glBlendColorEffff(void *that, float red, float green, float blue, float alpha)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBlendColor(red, green, blue, alpha);
}

  // proto:  void QOpenGLFunctions::glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
void demth_ZN16QOpenGLFunctions14glDrawElementsEjijPKv(void *that, unsigned int mode, int count, unsigned int type, const GLvoid * indices)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDrawElements(mode, count, type, indices);
}

  // proto:  void QOpenGLFunctions::glBindFramebuffer(GLenum target, GLuint framebuffer);
void demth_ZN16QOpenGLFunctions17glBindFramebufferEjj(void *that, unsigned int target, unsigned int framebuffer)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBindFramebuffer(target, framebuffer);
}

  // proto:  GLboolean QOpenGLFunctions::glIsProgram(GLuint program);
GLboolean demth_ZN16QOpenGLFunctions11glIsProgramEj(void *that, unsigned int program)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glIsProgram(program);
}

  // proto:  void QOpenGLFunctions::glBlendEquation(GLenum mode);
void demth_ZN16QOpenGLFunctions15glBlendEquationEj(void *that, unsigned int mode)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBlendEquation(mode);
}

  // proto:  void QOpenGLFunctions::glShaderBinary(GLint n, const GLuint * shaders, GLenum binaryformat, const void * binary, GLint length);
void demth_ZN16QOpenGLFunctions14glShaderBinaryEiPKjjPKvi(void *that, int n, const GLuint * shaders, unsigned int binaryformat, const void * binary, int length)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glShaderBinary(n, shaders, binaryformat, binary, length);
}

  // proto:  void QOpenGLFunctions::glGetProgramInfoLog(GLuint program, GLsizei bufsize, GLsizei * length, char * infolog);
void demth_ZN16QOpenGLFunctions19glGetProgramInfoLogEjiPiPc(void *that, unsigned int program, int bufsize, GLsizei * length, char * infolog)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetProgramInfoLog(program, bufsize, length, infolog);
}

  // proto:  void QOpenGLFunctions::glDeleteBuffers(GLsizei n, const GLuint * buffers);
void demth_ZN16QOpenGLFunctions15glDeleteBuffersEiPKj(void *that, int n, const GLuint * buffers)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDeleteBuffers(n, buffers);
}

  // proto:  void QOpenGLFunctions::glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
void demth_ZN16QOpenGLFunctions9glScissorEiiii(void *that, int x, int y, int width, int height)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glScissor(x, y, width, height);
}

  // proto:  void QOpenGLFunctions::glGenRenderbuffers(GLsizei n, GLuint * renderbuffers);
void demth_ZN16QOpenGLFunctions18glGenRenderbuffersEiPj(void *that, int n, GLuint * renderbuffers)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGenRenderbuffers(n, renderbuffers);
}

  // proto:  void QOpenGLFunctions::glVertexAttrib3f(GLuint indx, GLfloat x, GLfloat y, GLfloat z);
void demth_ZN16QOpenGLFunctions16glVertexAttrib3fEjfff(void *that, unsigned int indx, float x, float y, float z)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glVertexAttrib3f(indx, x, y, z);
}

  // proto:  GLuint QOpenGLFunctions::glCreateProgram();
GLuint demth_ZN16QOpenGLFunctions15glCreateProgramEv(void *that)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glCreateProgram();
}

  // proto:  void QOpenGLFunctions::glUniform4iv(GLint location, GLsizei count, const GLint * v);
void demth_ZN16QOpenGLFunctions12glUniform4ivEiiPKi(void *that, int location, int count, const GLint * v)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform4iv(location, count, v);
}

  // proto:  void QOpenGLFunctions::glEnable(GLenum cap);
void demth_ZN16QOpenGLFunctions8glEnableEj(void *that, unsigned int cap)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glEnable(cap);
}

  // proto:  void QOpenGLFunctions::glBindTexture(GLenum target, GLuint texture);
void demth_ZN16QOpenGLFunctions13glBindTextureEjj(void *that, unsigned int target, unsigned int texture)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBindTexture(target, texture);
}

  // proto:  void QOpenGLFunctions::glTexParameterf(GLenum target, GLenum pname, GLfloat param);
void demth_ZN16QOpenGLFunctions15glTexParameterfEjjf(void *that, unsigned int target, unsigned int pname, float param)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glTexParameterf(target, pname, param);
}

  // proto:  void QOpenGLFunctions::glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
void demth_ZN16QOpenGLFunctions10glViewportEiiii(void *that, int x, int y, int width, int height)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glViewport(x, y, width, height);
}

  // proto:  void QOpenGLFunctions::glSampleCoverage(GLclampf value, GLboolean invert);
void demth_ZN16QOpenGLFunctions16glSampleCoverageEfh(void *that, float value, unsigned char invert)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glSampleCoverage(value, invert);
}

  // proto:  void QOpenGLFunctions::glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
void demth_ZN16QOpenGLFunctions22glFramebufferTexture2DEjjjji(void *that, unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

  // proto:  void QOpenGLFunctions::glVertexAttribPointer(GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * ptr);
void demth_ZN16QOpenGLFunctions21glVertexAttribPointerEjijhiPKv(void *that, unsigned int indx, int size, unsigned int type, unsigned char normalized, int stride, const void * ptr)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glVertexAttribPointer(indx, size, type, normalized, stride, ptr);
}

  // proto:  void QOpenGLFunctions::glPolygonOffset(GLfloat factor, GLfloat units);
void demth_ZN16QOpenGLFunctions15glPolygonOffsetEff(void *that, float factor, float units)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glPolygonOffset(factor, units);
}

  // proto:  GLuint QOpenGLFunctions::glCreateShader(GLenum type);
GLuint demth_ZN16QOpenGLFunctions14glCreateShaderEj(void *that, unsigned int type)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glCreateShader(type);
}

  // proto:  void QOpenGLFunctions::glGetShaderSource(GLuint shader, GLsizei bufsize, GLsizei * length, char * source);
void demth_ZN16QOpenGLFunctions17glGetShaderSourceEjiPiPc(void *that, unsigned int shader, int bufsize, GLsizei * length, char * source)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetShaderSource(shader, bufsize, length, source);
}

  // proto:  GLboolean QOpenGLFunctions::glIsTexture(GLuint texture);
GLboolean demth_ZN16QOpenGLFunctions11glIsTextureEj(void *that, unsigned int texture)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glIsTexture(texture);
}

  // proto:  void QOpenGLFunctions::glDeleteTextures(GLsizei n, const GLuint * textures);
void demth_ZN16QOpenGLFunctions16glDeleteTexturesEiPKj(void *that, int n, const GLuint * textures)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDeleteTextures(n, textures);
}

  // proto:  void QOpenGLFunctions::glGetIntegerv(GLenum pname, GLint * params);
void demth_ZN16QOpenGLFunctions13glGetIntegervEjPi(void *that, unsigned int pname, GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetIntegerv(pname, params);
}

  // proto:  void QOpenGLFunctions::glGetBooleanv(GLenum pname, GLboolean * params);
void demth_ZN16QOpenGLFunctions13glGetBooleanvEjPh(void *that, unsigned int pname, GLboolean * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetBooleanv(pname, params);
}

  // proto:  void QOpenGLFunctions::glGetFloatv(GLenum pname, GLfloat * params);
void demth_ZN16QOpenGLFunctions11glGetFloatvEjPf(void *that, unsigned int pname, GLfloat * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetFloatv(pname, params);
}

  // proto:  void QOpenGLFunctions::glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers);
void demth_ZN16QOpenGLFunctions21glDeleteRenderbuffersEiPKj(void *that, int n, const GLuint * renderbuffers)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDeleteRenderbuffers(n, renderbuffers);
}

  // proto:  GLenum QOpenGLFunctions::glGetError();
GLenum demth_ZN16QOpenGLFunctions10glGetErrorEv(void *that)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glGetError();
}

  // proto:  void QOpenGLFunctions::glDetachShader(GLuint program, GLuint shader);
void demth_ZN16QOpenGLFunctions14glDetachShaderEjj(void *that, unsigned int program, unsigned int shader)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDetachShader(program, shader);
}

  // proto:  void QOpenGLFunctions::glVertexAttrib2f(GLuint indx, GLfloat x, GLfloat y);
void demth_ZN16QOpenGLFunctions16glVertexAttrib2fEjff(void *that, unsigned int indx, float x, float y)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glVertexAttrib2f(indx, x, y);
}

  // proto:  void QOpenGLFunctions::glVertexAttrib1f(GLuint indx, GLfloat x);
void demth_ZN16QOpenGLFunctions16glVertexAttrib1fEjf(void *that, unsigned int indx, float x)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glVertexAttrib1f(indx, x);
}

  // proto:  void QOpenGLFunctions::glGenBuffers(GLsizei n, GLuint * buffers);
void demth_ZN16QOpenGLFunctions12glGenBuffersEiPj(void *that, int n, GLuint * buffers)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGenBuffers(n, buffers);
}

  // proto:  void QOpenGLFunctions::glClearStencil(GLint s);
void demth_ZN16QOpenGLFunctions14glClearStencilEi(void *that, int s)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glClearStencil(s);
}

  // proto:  void QOpenGLFunctions::glStencilMask(GLuint mask);
void demth_ZN16QOpenGLFunctions13glStencilMaskEj(void *that, unsigned int mask)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glStencilMask(mask);
}

  // proto:  void QOpenGLFunctions::glGetShaderInfoLog(GLuint shader, GLsizei bufsize, GLsizei * length, char * infolog);
void demth_ZN16QOpenGLFunctions18glGetShaderInfoLogEjiPiPc(void *that, unsigned int shader, int bufsize, GLsizei * length, char * infolog)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetShaderInfoLog(shader, bufsize, length, infolog);
}

  // proto:  void QOpenGLFunctions::glReleaseShaderCompiler();
void demth_ZN16QOpenGLFunctions23glReleaseShaderCompilerEv(void *that)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glReleaseShaderCompiler();
}

  // proto:  void QOpenGLFunctions::glDepthMask(GLboolean flag);
void demth_ZN16QOpenGLFunctions11glDepthMaskEh(void *that, unsigned char flag)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDepthMask(flag);
}

  // proto:  void QOpenGLFunctions::glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params);
void demth_ZN16QOpenGLFunctions37glGetFramebufferAttachmentParameterivEjjjPi(void *that, unsigned int target, unsigned int attachment, unsigned int pname, GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

  // proto:  void QOpenGLFunctions::glUniform1f(GLint location, GLfloat x);
void demth_ZN16QOpenGLFunctions11glUniform1fEif(void *that, int location, float x)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform1f(location, x);
}

  // proto:  void QOpenGLFunctions::glGetAttachedShaders(GLuint program, GLsizei maxcount, GLsizei * count, GLuint * shaders);
void demth_ZN16QOpenGLFunctions20glGetAttachedShadersEjiPiPj(void *that, unsigned int program, int maxcount, GLsizei * count, GLuint * shaders)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetAttachedShaders(program, maxcount, count, shaders);
}

  // proto:  void QOpenGLFunctions::glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
void demth_ZN16QOpenGLFunctions11glStencilOpEjjj(void *that, unsigned int fail, unsigned int zfail, unsigned int zpass)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glStencilOp(fail, zfail, zpass);
}

  // proto:  void QOpenGLFunctions::glStencilFunc(GLenum func, GLint ref, GLuint mask);
void demth_ZN16QOpenGLFunctions13glStencilFuncEjij(void *that, unsigned int func, int ref, unsigned int mask)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glStencilFunc(func, ref, mask);
}

  // proto:  void QOpenGLFunctions::glAttachShader(GLuint program, GLuint shader);
void demth_ZN16QOpenGLFunctions14glAttachShaderEjj(void *that, unsigned int program, unsigned int shader)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glAttachShader(program, shader);
}

  // proto:  void QOpenGLFunctions::glDeleteShader(GLuint shader);
void demth_ZN16QOpenGLFunctions14glDeleteShaderEj(void *that, unsigned int shader)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDeleteShader(shader);
}

  // proto:  void QOpenGLFunctions::glCompileShader(GLuint shader);
void demth_ZN16QOpenGLFunctions15glCompileShaderEj(void *that, unsigned int shader)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glCompileShader(shader);
}

  // proto:  void QOpenGLFunctions::glEnableVertexAttribArray(GLuint index);
void demth_ZN16QOpenGLFunctions25glEnableVertexAttribArrayEj(void *that, unsigned int index)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glEnableVertexAttribArray(index);
}

  // proto:  void QOpenGLFunctions::glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
void demth_ZN16QOpenGLFunctions25glFramebufferRenderbufferEjjjj(void *that, unsigned int target, unsigned int attachment, unsigned int renderbuffertarget, unsigned int renderbuffer)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

  // proto:  void QOpenGLFunctions::glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void demth_ZN16QOpenGLFunctions11glColorMaskEhhhh(void *that, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glColorMask(red, green, blue, alpha);
}

  // proto:  GLboolean QOpenGLFunctions::glIsEnabled(GLenum cap);
GLboolean demth_ZN16QOpenGLFunctions11glIsEnabledEj(void *that, unsigned int cap)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glIsEnabled(cap);
}

  // proto:  void QOpenGLFunctions::glBindRenderbuffer(GLenum target, GLuint renderbuffer);
void demth_ZN16QOpenGLFunctions18glBindRenderbufferEjj(void *that, unsigned int target, unsigned int renderbuffer)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBindRenderbuffer(target, renderbuffer);
}

  // proto:  void QOpenGLFunctions::glVertexAttrib3fv(GLuint indx, const GLfloat * values);
void demth_ZN16QOpenGLFunctions17glVertexAttrib3fvEjPKf(void *that, unsigned int indx, const GLfloat * values)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glVertexAttrib3fv(indx, values);
}

  // proto:  void QOpenGLFunctions::glBlendFunc(GLenum sfactor, GLenum dfactor);
void demth_ZN16QOpenGLFunctions11glBlendFuncEjj(void *that, unsigned int sfactor, unsigned int dfactor)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBlendFunc(sfactor, dfactor);
}

  // proto:  void QOpenGLFunctions::glUniform3f(GLint location, GLfloat x, GLfloat y, GLfloat z);
void demth_ZN16QOpenGLFunctions11glUniform3fEifff(void *that, int location, float x, float y, float z)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform3f(location, x, y, z);
}

  // proto:  void QOpenGLFunctions::glVertexAttrib4f(GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void demth_ZN16QOpenGLFunctions16glVertexAttrib4fEjffff(void *that, unsigned int indx, float x, float y, float z, float w)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glVertexAttrib4f(indx, x, y, z, w);
}

  // proto:  GLint QOpenGLFunctions::glGetAttribLocation(GLuint program, const char * name);
GLint demth_ZN16QOpenGLFunctions19glGetAttribLocationEjPKc(void *that, unsigned int program, const char * name)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glGetAttribLocation(program, name);
}

  // proto:  void QOpenGLFunctions::glUniform2iv(GLint location, GLsizei count, const GLint * v);
void demth_ZN16QOpenGLFunctions12glUniform2ivEiiPKi(void *that, int location, int count, const GLint * v)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform2iv(location, count, v);
}

  // proto:  void QOpenGLFunctions::glGetUniformiv(GLuint program, GLint location, GLint * params);
void demth_ZN16QOpenGLFunctions14glGetUniformivEjiPi(void *that, unsigned int program, int location, GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetUniformiv(program, location, params);
}

  // proto:  void QOpenGLFunctions::glBufferSubData(GLenum target, qopengl_GLintptr offset, qopengl_GLsizeiptr size, const void * data);
void demth_ZN16QOpenGLFunctions15glBufferSubDataEjiiPKv(void *that, unsigned int target, int offset, int size, const void * data)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBufferSubData(target, offset, size, data);
}

  // proto:  void QOpenGLFunctions::glUseProgram(GLuint program);
void demth_ZN16QOpenGLFunctions12glUseProgramEj(void *that, unsigned int program)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUseProgram(program);
}

  // proto:  void QOpenGLFunctions::glDisable(GLenum cap);
void demth_ZN16QOpenGLFunctions9glDisableEj(void *that, unsigned int cap)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDisable(cap);
}

  // proto:  void QOpenGLFunctions::glUniform4f(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void demth_ZN16QOpenGLFunctions11glUniform4fEiffff(void *that, int location, float x, float y, float z, float w)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform4f(location, x, y, z, w);
}

  // proto:  void QOpenGLFunctions::glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
void demth_ZN16QOpenGLFunctions21glStencilFuncSeparateEjjij(void *that, unsigned int face, unsigned int func, int ref, unsigned int mask)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glStencilFuncSeparate(face, func, ref, mask);
}

  // proto:  void QOpenGLFunctions::glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void demth_ZN16QOpenGLFunctions16glCopyTexImage2DEjijiiiii(void *that, unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int height, int border)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

  // proto:  void QOpenGLFunctions::glLinkProgram(GLuint program);
void demth_ZN16QOpenGLFunctions13glLinkProgramEj(void *that, unsigned int program)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glLinkProgram(program);
}

  // proto:  void QOpenGLFunctions::glBufferData(GLenum target, qopengl_GLsizeiptr size, const void * data, GLenum usage);
void demth_ZN16QOpenGLFunctions12glBufferDataEjiPKvj(void *that, unsigned int target, int size, const void * data, unsigned int usage)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBufferData(target, size, data, usage);
}

  // proto:  void QOpenGLFunctions::glGetUniformfv(GLuint program, GLint location, GLfloat * params);
void demth_ZN16QOpenGLFunctions14glGetUniformfvEjiPf(void *that, unsigned int program, int location, GLfloat * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetUniformfv(program, location, params);
}

  // proto:  void QOpenGLFunctions::glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
void demth_ZN16QOpenGLFunctions21glRenderbufferStorageEjjii(void *that, unsigned int target, unsigned int internalformat, int width, int height)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glRenderbufferStorage(target, internalformat, width, height);
}

  // proto:  GLboolean QOpenGLFunctions::glIsShader(GLuint shader);
GLboolean demth_ZN16QOpenGLFunctions10glIsShaderEj(void *that, unsigned int shader)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glIsShader(shader);
}

  // proto:  void QOpenGLFunctions::glUniform1i(GLint location, GLint x);
void demth_ZN16QOpenGLFunctions11glUniform1iEii(void *that, int location, int x)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniform1i(location, x);
}

  // proto:  void QOpenGLFunctions::glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
void demth_ZN16QOpenGLFunctions19glBlendFuncSeparateEjjjj(void *that, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

  // proto:  void QOpenGLFunctions::glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params);
void demth_ZN16QOpenGLFunctions16glTexParameterfvEjjPKf(void *that, unsigned int target, unsigned int pname, const GLfloat * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glTexParameterfv(target, pname, params);
}

  // proto:  void QOpenGLFunctions::glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
void demth_ZN16QOpenGLFunctions18glUniformMatrix4fvEiihPKf(void *that, int location, int count, unsigned char transpose, const GLfloat * value)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glUniformMatrix4fv(location, count, transpose, value);
}

  // proto:  void QOpenGLFunctions::glValidateProgram(GLuint program);
void demth_ZN16QOpenGLFunctions17glValidateProgramEj(void *that, unsigned int program)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glValidateProgram(program);
}

  // proto:  void QOpenGLFunctions::glFlush();
void demth_ZN16QOpenGLFunctions7glFlushEv(void *that)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glFlush();
}

  // proto:  GLenum QOpenGLFunctions::glCheckFramebufferStatus(GLenum target);
GLenum demth_ZN16QOpenGLFunctions24glCheckFramebufferStatusEj(void *that, unsigned int target)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
  return cthat->glCheckFramebufferStatus(target);
}

  // proto:  void QOpenGLFunctions::glStencilOpSeparate(GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
void demth_ZN16QOpenGLFunctions19glStencilOpSeparateEjjjj(void *that, unsigned int face, unsigned int fail, unsigned int zfail, unsigned int zpass)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glStencilOpSeparate(face, fail, zfail, zpass);
}

  // proto:  void QOpenGLFunctions::glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);
void demth_ZN16QOpenGLFunctions19glGetTexParameterivEjjPi(void *that, unsigned int target, unsigned int pname, GLint * params)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetTexParameteriv(target, pname, params);
}

  // proto:  void QOpenGLFunctions::glClear(GLbitfield mask);
void demth_ZN16QOpenGLFunctions7glClearEj(void *that, unsigned int mask)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glClear(mask);
}

  // proto:  void QOpenGLFunctions::glGetActiveUniform(GLuint program, GLuint index, GLsizei bufsize, GLsizei * length, GLint * size, GLenum * type, char * name);
void demth_ZN16QOpenGLFunctions18glGetActiveUniformEjjiPiS0_PjPc(void *that, unsigned int program, unsigned int index, int bufsize, GLsizei * length, GLint * size, GLenum * type, char * name)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glGetActiveUniform(program, index, bufsize, length, size, type, name);
}

  // proto:  void QOpenGLFunctions::glDisableVertexAttribArray(GLuint index);
void demth_ZN16QOpenGLFunctions26glDisableVertexAttribArrayEj(void *that, unsigned int index)
{
  QOpenGLFunctions *cthat = (QOpenGLFunctions *)that;
   cthat->glDisableVertexAttribArray(index);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

