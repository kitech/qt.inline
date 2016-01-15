// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qopenglfunctions.h
// dst-file: /src/gui/qopenglfunctions.cxx
//

// header block begin =>
#include <qatomic.h>
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

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qopenglfunctions_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 307, column 10>
//   // proto:  void QOpenGLFunctions::glBindAttribLocation(GLuint program, GLuint index, const char * name);
if (false) {
  auto f = [](GLuint arg1, GLuint arg2, const char * arg3) {
    ((QOpenGLFunctions*)0)->glBindAttribLocation(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions20glBindAttribLocationEjjPKc glBindAttribLocation(GLuint, GLuint, const char *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 337, column 10>
//   // proto:  void QOpenGLFunctions::glGenFramebuffers(GLsizei n, GLuint * framebuffers);
if (false) {
  auto f = [](GLsizei arg1, GLuint * arg2) {
    ((QOpenGLFunctions*)0)->glGenFramebuffers(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions17glGenFramebuffersEiPj glGenFramebuffers(GLsizei, GLuint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 383, column 10>
//   // proto:  void QOpenGLFunctions::glUniform3iv(GLint location, GLsizei count, const GLint * v);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, const GLint * arg3) {
    ((QOpenGLFunctions*)0)->glUniform3iv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions12glUniform3ivEiiPKi glUniform3iv(GLint, GLsizei, const GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 400, column 10>
//   // proto:  void QOpenGLFunctions::glVertexAttrib4fv(GLuint indx, const GLfloat * values);
if (false) {
  auto f = [](GLuint arg1, const GLfloat * arg2) {
    ((QOpenGLFunctions*)0)->glVertexAttrib4fv(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions17glVertexAttrib4fvEjPKf glVertexAttrib4fv(GLuint, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 358, column 15>
//   // proto:  GLboolean QOpenGLFunctions::glIsBuffer(GLuint buffer);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glIsBuffer(arg1);
  };
}
// _ZN16QOpenGLFunctions10glIsBufferEj glIsBuffer(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 288, column 10>
//   // proto:  void QOpenGLFunctions::glLineWidth(GLfloat width);
if (false) {
  auto f = [](GLfloat arg1) {
    ((QOpenGLFunctions*)0)->glLineWidth(arg1);
  };
}
// _ZN16QOpenGLFunctions11glLineWidthEf glLineWidth(GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 320, column 10>
//   // proto:  void QOpenGLFunctions::glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
if (false) {
  auto f = [](GLenum arg1, GLint arg2, GLenum arg3, GLsizei arg4, GLsizei arg5, GLint arg6, GLsizei arg7, const void * arg8) {
    ((QOpenGLFunctions*)0)->glCompressedTexImage2D(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
  };
}
// _ZN16QOpenGLFunctions22glCompressedTexImage2DEjijiiiiPKv glCompressedTexImage2D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 329, column 10>
//   // proto:  void QOpenGLFunctions::glDepthRangef(GLclampf zNear, GLclampf zFar);
if (false) {
  auto f = [](GLclampf arg1, GLclampf arg2) {
    ((QOpenGLFunctions*)0)->glDepthRangef(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions13glDepthRangefEff glDepthRangef(GLclampf, GLclampf)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 394, column 10>
//   // proto:  void QOpenGLFunctions::glVertexAttrib1fv(GLuint indx, const GLfloat * values);
if (false) {
  auto f = [](GLuint arg1, const GLfloat * arg2) {
    ((QOpenGLFunctions*)0)->glVertexAttrib1fv(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions17glVertexAttrib1fvEjPKf glVertexAttrib1fv(GLuint, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 300, column 10>
//   // proto:  void QOpenGLFunctions::glTexParameteriv(GLenum target, GLenum pname, const GLint * params);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, const GLint * arg3) {
    ((QOpenGLFunctions*)0)->glTexParameteriv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions16glTexParameterivEjjPKi glTexParameteriv(GLenum, GLenum, const GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 301, column 10>
//   // proto:  void QOpenGLFunctions::glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
if (false) {
  auto f = [](GLenum arg1, GLint arg2, GLint arg3, GLint arg4, GLsizei arg5, GLsizei arg6, GLenum arg7, GLenum arg8, const GLvoid * arg9) {
    ((QOpenGLFunctions*)0)->glTexSubImage2D(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
  };
}
// _ZN16QOpenGLFunctions15glTexSubImage2DEjiiiiijjPKv glTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 326, column 10>
//   // proto:  void QOpenGLFunctions::glDeleteProgram(GLuint program);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glDeleteProgram(arg1);
  };
}
// _ZN16QOpenGLFunctions15glDeleteProgramEj glDeleteProgram(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 313, column 10>
//   // proto:  void QOpenGLFunctions::glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2) {
    ((QOpenGLFunctions*)0)->glBlendEquationSeparate(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions23glBlendEquationSeparateEjj glBlendEquationSeparate(GLenum, GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 370, column 10>
//   // proto:  void QOpenGLFunctions::glStencilMaskSeparate(GLenum face, GLuint mask);
if (false) {
  auto f = [](GLenum arg1, GLuint arg2) {
    ((QOpenGLFunctions*)0)->glStencilMaskSeparate(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions21glStencilMaskSeparateEjj glStencilMaskSeparate(GLenum, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 271, column 10>
//   // proto:  void QOpenGLFunctions::glDrawArrays(GLenum mode, GLint first, GLsizei count);
if (false) {
  auto f = [](GLenum arg1, GLint arg2, GLsizei arg3) {
    ((QOpenGLFunctions*)0)->glDrawArrays(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions12glDrawArraysEjii glDrawArrays(GLenum, GLint, GLsizei)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 274, column 10>
//   // proto:  void QOpenGLFunctions::glFinish();
if (false) {
  auto f = []() {
    ((QOpenGLFunctions*)0)->glFinish();
  };
}
// _ZN16QOpenGLFunctions8glFinishEv glFinish()
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 357, column 10>
//   // proto:  void QOpenGLFunctions::glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer);
if (false) {
  auto f = [](GLuint arg1, GLenum arg2, void ** arg3) {
    ((QOpenGLFunctions*)0)->glGetVertexAttribPointerv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions25glGetVertexAttribPointervEjjPPv glGetVertexAttribPointerv(GLuint, GLenum, void **)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 305, column 10>
//   // proto:  void QOpenGLFunctions::glActiveTexture(GLenum texture);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glActiveTexture(arg1);
  };
}
// _ZN16QOpenGLFunctions15glActiveTextureEj glActiveTexture(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 276, column 10>
//   // proto:  void QOpenGLFunctions::glFrontFace(GLenum mode);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glFrontFace(arg1);
  };
}
// _ZN16QOpenGLFunctions11glFrontFaceEj glFrontFace(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 283, column 10>
//   // proto:  void QOpenGLFunctions::glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLfloat * arg3) {
    ((QOpenGLFunctions*)0)->glGetTexParameterfv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions19glGetTexParameterfvEjjPf glGetTexParameterfv(GLenum, GLenum, GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 289, column 10>
//   // proto:  void QOpenGLFunctions::glPixelStorei(GLenum pname, GLint param);
if (false) {
  auto f = [](GLenum arg1, GLint arg2) {
    ((QOpenGLFunctions*)0)->glPixelStorei(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions13glPixelStoreiEji glPixelStorei(GLenum, GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 266, column 10>
//   // proto:  void QOpenGLFunctions::glCullFace(GLenum mode);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glCullFace(arg1);
  };
}
// _ZN16QOpenGLFunctions10glCullFaceEj glCullFace(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 348, column 10>
//   // proto:  void QOpenGLFunctions::glGetShaderiv(GLuint shader, GLenum pname, GLint * params);
if (false) {
  auto f = [](GLuint arg1, GLenum arg2, GLint * arg3) {
    ((QOpenGLFunctions*)0)->glGetShaderiv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions13glGetShaderivEjjPi glGetShaderiv(GLuint, GLenum, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 386, column 10>
//   // proto:  void QOpenGLFunctions::glUniform4i(GLint location, GLint x, GLint y, GLint z, GLint w);
if (false) {
  auto f = [](GLint arg1, GLint arg2, GLint arg3, GLint arg4, GLint arg5) {
    ((QOpenGLFunctions*)0)->glUniform4i(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN16QOpenGLFunctions11glUniform4iEiiiii glUniform4i(GLint, GLint, GLint, GLint, GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 291, column 10>
//   // proto:  void QOpenGLFunctions::glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
if (false) {
  auto f = [](GLint arg1, GLint arg2, GLsizei arg3, GLsizei arg4, GLenum arg5, GLenum arg6, GLvoid * arg7) {
    ((QOpenGLFunctions*)0)->glReadPixels(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
}
// _ZN16QOpenGLFunctions12glReadPixelsEiiiijjPv glReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 299, column 10>
//   // proto:  void QOpenGLFunctions::glTexParameteri(GLenum target, GLenum pname, GLint param);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLint arg3) {
    ((QOpenGLFunctions*)0)->glTexParameteri(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions15glTexParameteriEjji glTexParameteri(GLenum, GLenum, GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 356, column 10>
//   // proto:  void QOpenGLFunctions::glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params);
if (false) {
  auto f = [](GLuint arg1, GLenum arg2, GLint * arg3) {
    ((QOpenGLFunctions*)0)->glGetVertexAttribiv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions19glGetVertexAttribivEjjPi glGetVertexAttribiv(GLuint, GLenum, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 261, column 10>
//   // proto:  void QOpenGLFunctions::glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
if (false) {
  auto f = [](GLclampf arg1, GLclampf arg2, GLclampf arg3, GLclampf arg4) {
    ((QOpenGLFunctions*)0)->glClearColor(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions12glClearColorEffff glClearColor(GLclampf, GLclampf, GLclampf, GLclampf)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 318, column 10>
//   // proto:  void QOpenGLFunctions::glClearDepthf(GLclampf depth);
if (false) {
  auto f = [](GLclampf arg1) {
    ((QOpenGLFunctions*)0)->glClearDepthf(arg1);
  };
}
// _ZN16QOpenGLFunctions13glClearDepthfEf glClearDepthf(GLclampf)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 378, column 10>
//   // proto:  void QOpenGLFunctions::glUniform2i(GLint location, GLint x, GLint y);
if (false) {
  auto f = [](GLint arg1, GLint arg2, GLint arg3) {
    ((QOpenGLFunctions*)0)->glUniform2i(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions11glUniform2iEiii glUniform2i(GLint, GLint, GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 336, column 10>
//   // proto:  void QOpenGLFunctions::glGenerateMipmap(GLenum target);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glGenerateMipmap(arg1);
  };
}
// _ZN16QOpenGLFunctions16glGenerateMipmapEj glGenerateMipmap(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 321, column 10>
//   // proto:  void QOpenGLFunctions::glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
if (false) {
  auto f = [](GLenum arg1, GLint arg2, GLint arg3, GLint arg4, GLsizei arg5, GLsizei arg6, GLenum arg7, GLsizei arg8, const void * arg9) {
    ((QOpenGLFunctions*)0)->glCompressedTexSubImage2D(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
  };
}
// _ZN16QOpenGLFunctions25glCompressedTexSubImage2DEjiiiiijiPKv glCompressedTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 382, column 10>
//   // proto:  void QOpenGLFunctions::glUniform3i(GLint location, GLint x, GLint y, GLint z);
if (false) {
  auto f = [](GLint arg1, GLint arg2, GLint arg3, GLint arg4) {
    ((QOpenGLFunctions*)0)->glUniform3i(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions11glUniform3iEiiii glUniform3i(GLint, GLint, GLint, GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 277, column 10>
//   // proto:  void QOpenGLFunctions::glGenTextures(GLsizei n, GLuint * textures);
if (false) {
  auto f = [](GLsizei arg1, GLuint * arg2) {
    ((QOpenGLFunctions*)0)->glGenTextures(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions13glGenTexturesEiPj glGenTextures(GLsizei, GLuint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 350, column 10>
//   // proto:  void QOpenGLFunctions::glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLint * arg3, GLint * arg4) {
    ((QOpenGLFunctions*)0)->glGetShaderPrecisionFormat(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions26glGetShaderPrecisionFormatEjjPiS0_ glGetShaderPrecisionFormat(GLenum, GLenum, GLint *, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 385, column 10>
//   // proto:  void QOpenGLFunctions::glUniform4fv(GLint location, GLsizei count, const GLfloat * v);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, const GLfloat * arg3) {
    ((QOpenGLFunctions*)0)->glUniform4fv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions12glUniform4fvEiiPKf glUniform4fv(GLint, GLsizei, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 345, column 10>
//   // proto:  void QOpenGLFunctions::glGetProgramiv(GLuint program, GLenum pname, GLint * params);
if (false) {
  auto f = [](GLuint arg1, GLenum arg2, GLint * arg3) {
    ((QOpenGLFunctions*)0)->glGetProgramiv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions14glGetProgramivEjjPi glGetProgramiv(GLuint, GLenum, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 396, column 10>
//   // proto:  void QOpenGLFunctions::glVertexAttrib2fv(GLuint indx, const GLfloat * values);
if (false) {
  auto f = [](GLuint arg1, const GLfloat * arg2) {
    ((QOpenGLFunctions*)0)->glVertexAttrib2fv(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions17glVertexAttrib2fvEjPKf glVertexAttrib2fv(GLuint, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 339, column 10>
//   // proto:  void QOpenGLFunctions::glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufsize, GLsizei * length, GLint * size, GLenum * type, char * name);
if (false) {
  auto f = [](GLuint arg1, GLuint arg2, GLsizei arg3, GLsizei * arg4, GLint * arg5, GLenum * arg6, char * arg7) {
    ((QOpenGLFunctions*)0)->glGetActiveAttrib(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
}
// _ZN16QOpenGLFunctions17glGetActiveAttribEjjiPiS0_PjPc glGetActiveAttrib(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, char *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 361, column 15>
//   // proto:  GLboolean QOpenGLFunctions::glIsRenderbuffer(GLuint renderbuffer);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glIsRenderbuffer(arg1);
  };
}
// _ZN16QOpenGLFunctions16glIsRenderbufferEj glIsRenderbuffer(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 265, column 10>
//   // proto:  void QOpenGLFunctions::glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
if (false) {
  auto f = [](GLenum arg1, GLint arg2, GLint arg3, GLint arg4, GLint arg5, GLint arg6, GLsizei arg7, GLsizei arg8) {
    ((QOpenGLFunctions*)0)->glCopyTexSubImage2D(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
  };
}
// _ZN16QOpenGLFunctions19glCopyTexSubImage2DEjiiiiiii glCopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 368, column 10>
//   // proto:  void QOpenGLFunctions::glShaderSource(GLuint shader, GLsizei count, const char ** string, const GLint * length);
if (false) {
  auto f = [](GLuint arg1, GLsizei arg2, const char ** arg3, const GLint * arg4) {
    ((QOpenGLFunctions*)0)->glShaderSource(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions14glShaderSourceEjiPPKcPKi glShaderSource(GLuint, GLsizei, const char **, const GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 355, column 10>
//   // proto:  void QOpenGLFunctions::glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params);
if (false) {
  auto f = [](GLuint arg1, GLenum arg2, GLfloat * arg3) {
    ((QOpenGLFunctions*)0)->glGetVertexAttribfv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions19glGetVertexAttribfvEjjPf glGetVertexAttribfv(GLuint, GLenum, GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 268, column 10>
//   // proto:  void QOpenGLFunctions::glDepthFunc(GLenum func);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glDepthFunc(arg1);
  };
}
// _ZN16QOpenGLFunctions11glDepthFuncEj glDepthFunc(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 296, column 10>
//   // proto:  void QOpenGLFunctions::glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
if (false) {
  auto f = [](GLenum arg1, GLint arg2, GLint arg3, GLsizei arg4, GLsizei arg5, GLint arg6, GLenum arg7, GLenum arg8, const GLvoid * arg9) {
    ((QOpenGLFunctions*)0)->glTexImage2D(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
  };
}
// _ZN16QOpenGLFunctions12glTexImage2DEjiiiiijjPKv glTexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 325, column 10>
//   // proto:  void QOpenGLFunctions::glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers);
if (false) {
  auto f = [](GLsizei arg1, const GLuint * arg2) {
    ((QOpenGLFunctions*)0)->glDeleteFramebuffers(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions20glDeleteFramebuffersEiPKj glDeleteFramebuffers(GLsizei, const GLuint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 285, column 10>
//   // proto:  void QOpenGLFunctions::glHint(GLenum target, GLenum mode);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2) {
    ((QOpenGLFunctions*)0)->glHint(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions6glHintEjj glHint(GLenum, GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 354, column 11>
//   // proto:  GLint QOpenGLFunctions::glGetUniformLocation(GLuint program, const char * name);
if (false) {
  auto f = [](GLuint arg1, const char * arg2) {
    ((QOpenGLFunctions*)0)->glGetUniformLocation(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions20glGetUniformLocationEjPKc glGetUniformLocation(GLuint, const char *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 359, column 15>
//   // proto:  GLboolean QOpenGLFunctions::glIsFramebuffer(GLuint framebuffer);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glIsFramebuffer(arg1);
  };
}
// _ZN16QOpenGLFunctions15glIsFramebufferEj glIsFramebuffer(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 373, column 10>
//   // proto:  void QOpenGLFunctions::glUniform1fv(GLint location, GLsizei count, const GLfloat * v);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, const GLfloat * arg3) {
    ((QOpenGLFunctions*)0)->glUniform1fv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions12glUniform1fvEiiPKf glUniform1fv(GLint, GLsizei, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 282, column 20>
//   // proto:  const GLubyte * QOpenGLFunctions::glGetString(GLenum name);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glGetString(arg1);
  };
}
// _ZN16QOpenGLFunctions11glGetStringEj glGetString(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 388, column 10>
//   // proto:  void QOpenGLFunctions::glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, GLboolean arg3, const GLfloat * arg4) {
    ((QOpenGLFunctions*)0)->glUniformMatrix2fv(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions18glUniformMatrix2fvEiihPKf glUniformMatrix2fv(GLint, GLsizei, GLboolean, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 389, column 10>
//   // proto:  void QOpenGLFunctions::glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, GLboolean arg3, const GLfloat * arg4) {
    ((QOpenGLFunctions*)0)->glUniformMatrix3fv(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions18glUniformMatrix3fvEiihPKf glUniformMatrix3fv(GLint, GLsizei, GLboolean, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 308, column 10>
//   // proto:  void QOpenGLFunctions::glBindBuffer(GLenum target, GLuint buffer);
if (false) {
  auto f = [](GLenum arg1, GLuint arg2) {
    ((QOpenGLFunctions*)0)->glBindBuffer(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions12glBindBufferEjj glBindBuffer(GLenum, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 376, column 10>
//   // proto:  void QOpenGLFunctions::glUniform2f(GLint location, GLfloat x, GLfloat y);
if (false) {
  auto f = [](GLint arg1, GLfloat arg2, GLfloat arg3) {
    ((QOpenGLFunctions*)0)->glUniform2f(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions11glUniform2fEiff glUniform2f(GLint, GLfloat, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 381, column 10>
//   // proto:  void QOpenGLFunctions::glUniform3fv(GLint location, GLsizei count, const GLfloat * v);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, const GLfloat * arg3) {
    ((QOpenGLFunctions*)0)->glUniform3fv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions12glUniform3fvEiiPKf glUniform3fv(GLint, GLsizei, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 377, column 10>
//   // proto:  void QOpenGLFunctions::glUniform2fv(GLint location, GLsizei count, const GLfloat * v);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, const GLfloat * arg3) {
    ((QOpenGLFunctions*)0)->glUniform2fv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions12glUniform2fvEiiPKf glUniform2fv(GLint, GLsizei, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 347, column 10>
//   // proto:  void QOpenGLFunctions::glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLint * arg3) {
    ((QOpenGLFunctions*)0)->glGetRenderbufferParameteriv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions28glGetRenderbufferParameterivEjjPi glGetRenderbufferParameteriv(GLenum, GLenum, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 343, column 10>
//   // proto:  void QOpenGLFunctions::glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLint * arg3) {
    ((QOpenGLFunctions*)0)->glGetBufferParameteriv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions22glGetBufferParameterivEjjPi glGetBufferParameteriv(GLenum, GLenum, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 375, column 10>
//   // proto:  void QOpenGLFunctions::glUniform1iv(GLint location, GLsizei count, const GLint * v);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, const GLint * arg3) {
    ((QOpenGLFunctions*)0)->glUniform1iv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions12glUniform1ivEiiPKi glUniform1iv(GLint, GLsizei, const GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 311, column 10>
//   // proto:  void QOpenGLFunctions::glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
if (false) {
  auto f = [](GLclampf arg1, GLclampf arg2, GLclampf arg3, GLclampf arg4) {
    ((QOpenGLFunctions*)0)->glBlendColor(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions12glBlendColorEffff glBlendColor(GLclampf, GLclampf, GLclampf, GLclampf)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 272, column 10>
//   // proto:  void QOpenGLFunctions::glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
if (false) {
  auto f = [](GLenum arg1, GLsizei arg2, GLenum arg3, const GLvoid * arg4) {
    ((QOpenGLFunctions*)0)->glDrawElements(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions14glDrawElementsEjijPKv glDrawElements(GLenum, GLsizei, GLenum, const GLvoid *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 309, column 10>
//   // proto:  void QOpenGLFunctions::glBindFramebuffer(GLenum target, GLuint framebuffer);
if (false) {
  auto f = [](GLenum arg1, GLuint arg2) {
    ((QOpenGLFunctions*)0)->glBindFramebuffer(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions17glBindFramebufferEjj glBindFramebuffer(GLenum, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 360, column 15>
//   // proto:  GLboolean QOpenGLFunctions::glIsProgram(GLuint program);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glIsProgram(arg1);
  };
}
// _ZN16QOpenGLFunctions11glIsProgramEj glIsProgram(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 312, column 10>
//   // proto:  void QOpenGLFunctions::glBlendEquation(GLenum mode);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glBlendEquation(arg1);
  };
}
// _ZN16QOpenGLFunctions15glBlendEquationEj glBlendEquation(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 367, column 10>
//   // proto:  void QOpenGLFunctions::glShaderBinary(GLint n, const GLuint * shaders, GLenum binaryformat, const void * binary, GLint length);
if (false) {
  auto f = [](GLint arg1, const GLuint * arg2, GLenum arg3, const void * arg4, GLint arg5) {
    ((QOpenGLFunctions*)0)->glShaderBinary(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN16QOpenGLFunctions14glShaderBinaryEiPKjjPKvi glShaderBinary(GLint, const GLuint *, GLenum, const void *, GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 346, column 10>
//   // proto:  void QOpenGLFunctions::glGetProgramInfoLog(GLuint program, GLsizei bufsize, GLsizei * length, char * infolog);
if (false) {
  auto f = [](GLuint arg1, GLsizei arg2, GLsizei * arg3, char * arg4) {
    ((QOpenGLFunctions*)0)->glGetProgramInfoLog(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions19glGetProgramInfoLogEjiPiPc glGetProgramInfoLog(GLuint, GLsizei, GLsizei *, char *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 324, column 10>
//   // proto:  void QOpenGLFunctions::glDeleteBuffers(GLsizei n, const GLuint * buffers);
if (false) {
  auto f = [](GLsizei arg1, const GLuint * arg2) {
    ((QOpenGLFunctions*)0)->glDeleteBuffers(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions15glDeleteBuffersEiPKj glDeleteBuffers(GLsizei, const GLuint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 292, column 10>
//   // proto:  void QOpenGLFunctions::glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
if (false) {
  auto f = [](GLint arg1, GLint arg2, GLsizei arg3, GLsizei arg4) {
    ((QOpenGLFunctions*)0)->glScissor(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions9glScissorEiiii glScissor(GLint, GLint, GLsizei, GLsizei)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 338, column 10>
//   // proto:  void QOpenGLFunctions::glGenRenderbuffers(GLsizei n, GLuint * renderbuffers);
if (false) {
  auto f = [](GLsizei arg1, GLuint * arg2) {
    ((QOpenGLFunctions*)0)->glGenRenderbuffers(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions18glGenRenderbuffersEiPj glGenRenderbuffers(GLsizei, GLuint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 397, column 10>
//   // proto:  void QOpenGLFunctions::glVertexAttrib3f(GLuint indx, GLfloat x, GLfloat y, GLfloat z);
if (false) {
  auto f = [](GLuint arg1, GLfloat arg2, GLfloat arg3, GLfloat arg4) {
    ((QOpenGLFunctions*)0)->glVertexAttrib3f(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions16glVertexAttrib3fEjfff glVertexAttrib3f(GLuint, GLfloat, GLfloat, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 322, column 12>
//   // proto:  GLuint QOpenGLFunctions::glCreateProgram();
if (false) {
  auto f = []() {
    ((QOpenGLFunctions*)0)->glCreateProgram();
  };
}
// _ZN16QOpenGLFunctions15glCreateProgramEv glCreateProgram()
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 387, column 10>
//   // proto:  void QOpenGLFunctions::glUniform4iv(GLint location, GLsizei count, const GLint * v);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, const GLint * arg3) {
    ((QOpenGLFunctions*)0)->glUniform4iv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions12glUniform4ivEiiPKi glUniform4iv(GLint, GLsizei, const GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 273, column 10>
//   // proto:  void QOpenGLFunctions::glEnable(GLenum cap);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glEnable(arg1);
  };
}
// _ZN16QOpenGLFunctions8glEnableEj glEnable(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 258, column 10>
//   // proto:  void QOpenGLFunctions::glBindTexture(GLenum target, GLuint texture);
if (false) {
  auto f = [](GLenum arg1, GLuint arg2) {
    ((QOpenGLFunctions*)0)->glBindTexture(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions13glBindTextureEjj glBindTexture(GLenum, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 297, column 10>
//   // proto:  void QOpenGLFunctions::glTexParameterf(GLenum target, GLenum pname, GLfloat param);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLfloat arg3) {
    ((QOpenGLFunctions*)0)->glTexParameterf(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions15glTexParameterfEjjf glTexParameterf(GLenum, GLenum, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 302, column 10>
//   // proto:  void QOpenGLFunctions::glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
if (false) {
  auto f = [](GLint arg1, GLint arg2, GLsizei arg3, GLsizei arg4) {
    ((QOpenGLFunctions*)0)->glViewport(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions10glViewportEiiii glViewport(GLint, GLint, GLsizei, GLsizei)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 366, column 10>
//   // proto:  void QOpenGLFunctions::glSampleCoverage(GLclampf value, GLboolean invert);
if (false) {
  auto f = [](GLclampf arg1, GLboolean arg2) {
    ((QOpenGLFunctions*)0)->glSampleCoverage(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions16glSampleCoverageEfh glSampleCoverage(GLclampf, GLboolean)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 334, column 10>
//   // proto:  void QOpenGLFunctions::glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLenum arg3, GLuint arg4, GLint arg5) {
    ((QOpenGLFunctions*)0)->glFramebufferTexture2D(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN16QOpenGLFunctions22glFramebufferTexture2DEjjjji glFramebufferTexture2D(GLenum, GLenum, GLenum, GLuint, GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 401, column 10>
//   // proto:  void QOpenGLFunctions::glVertexAttribPointer(GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * ptr);
if (false) {
  auto f = [](GLuint arg1, GLint arg2, GLenum arg3, GLboolean arg4, GLsizei arg5, const void * arg6) {
    ((QOpenGLFunctions*)0)->glVertexAttribPointer(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN16QOpenGLFunctions21glVertexAttribPointerEjijhiPKv glVertexAttribPointer(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 290, column 10>
//   // proto:  void QOpenGLFunctions::glPolygonOffset(GLfloat factor, GLfloat units);
if (false) {
  auto f = [](GLfloat arg1, GLfloat arg2) {
    ((QOpenGLFunctions*)0)->glPolygonOffset(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions15glPolygonOffsetEff glPolygonOffset(GLfloat, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 323, column 12>
//   // proto:  GLuint QOpenGLFunctions::glCreateShader(GLenum type);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glCreateShader(arg1);
  };
}
// _ZN16QOpenGLFunctions14glCreateShaderEj glCreateShader(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 351, column 10>
//   // proto:  void QOpenGLFunctions::glGetShaderSource(GLuint shader, GLsizei bufsize, GLsizei * length, char * source);
if (false) {
  auto f = [](GLuint arg1, GLsizei arg2, GLsizei * arg3, char * arg4) {
    ((QOpenGLFunctions*)0)->glGetShaderSource(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions17glGetShaderSourceEjiPiPc glGetShaderSource(GLuint, GLsizei, GLsizei *, char *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 287, column 15>
//   // proto:  GLboolean QOpenGLFunctions::glIsTexture(GLuint texture);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glIsTexture(arg1);
  };
}
// _ZN16QOpenGLFunctions11glIsTextureEj glIsTexture(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 267, column 10>
//   // proto:  void QOpenGLFunctions::glDeleteTextures(GLsizei n, const GLuint * textures);
if (false) {
  auto f = [](GLsizei arg1, const GLuint * arg2) {
    ((QOpenGLFunctions*)0)->glDeleteTextures(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions16glDeleteTexturesEiPKj glDeleteTextures(GLsizei, const GLuint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 281, column 10>
//   // proto:  void QOpenGLFunctions::glGetIntegerv(GLenum pname, GLint * params);
if (false) {
  auto f = [](GLenum arg1, GLint * arg2) {
    ((QOpenGLFunctions*)0)->glGetIntegerv(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions13glGetIntegervEjPi glGetIntegerv(GLenum, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 278, column 10>
//   // proto:  void QOpenGLFunctions::glGetBooleanv(GLenum pname, GLboolean * params);
if (false) {
  auto f = [](GLenum arg1, GLboolean * arg2) {
    ((QOpenGLFunctions*)0)->glGetBooleanv(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions13glGetBooleanvEjPh glGetBooleanv(GLenum, GLboolean *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 280, column 10>
//   // proto:  void QOpenGLFunctions::glGetFloatv(GLenum pname, GLfloat * params);
if (false) {
  auto f = [](GLenum arg1, GLfloat * arg2) {
    ((QOpenGLFunctions*)0)->glGetFloatv(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions11glGetFloatvEjPf glGetFloatv(GLenum, GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 327, column 10>
//   // proto:  void QOpenGLFunctions::glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers);
if (false) {
  auto f = [](GLsizei arg1, const GLuint * arg2) {
    ((QOpenGLFunctions*)0)->glDeleteRenderbuffers(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions21glDeleteRenderbuffersEiPKj glDeleteRenderbuffers(GLsizei, const GLuint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 279, column 12>
//   // proto:  GLenum QOpenGLFunctions::glGetError();
if (false) {
  auto f = []() {
    ((QOpenGLFunctions*)0)->glGetError();
  };
}
// _ZN16QOpenGLFunctions10glGetErrorEv glGetError()
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 330, column 10>
//   // proto:  void QOpenGLFunctions::glDetachShader(GLuint program, GLuint shader);
if (false) {
  auto f = [](GLuint arg1, GLuint arg2) {
    ((QOpenGLFunctions*)0)->glDetachShader(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions14glDetachShaderEjj glDetachShader(GLuint, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 395, column 10>
//   // proto:  void QOpenGLFunctions::glVertexAttrib2f(GLuint indx, GLfloat x, GLfloat y);
if (false) {
  auto f = [](GLuint arg1, GLfloat arg2, GLfloat arg3) {
    ((QOpenGLFunctions*)0)->glVertexAttrib2f(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions16glVertexAttrib2fEjff glVertexAttrib2f(GLuint, GLfloat, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 393, column 10>
//   // proto:  void QOpenGLFunctions::glVertexAttrib1f(GLuint indx, GLfloat x);
if (false) {
  auto f = [](GLuint arg1, GLfloat arg2) {
    ((QOpenGLFunctions*)0)->glVertexAttrib1f(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions16glVertexAttrib1fEjf glVertexAttrib1f(GLuint, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 335, column 10>
//   // proto:  void QOpenGLFunctions::glGenBuffers(GLsizei n, GLuint * buffers);
if (false) {
  auto f = [](GLsizei arg1, GLuint * arg2) {
    ((QOpenGLFunctions*)0)->glGenBuffers(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions12glGenBuffersEiPj glGenBuffers(GLsizei, GLuint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 262, column 10>
//   // proto:  void QOpenGLFunctions::glClearStencil(GLint s);
if (false) {
  auto f = [](GLint arg1) {
    ((QOpenGLFunctions*)0)->glClearStencil(arg1);
  };
}
// _ZN16QOpenGLFunctions14glClearStencilEi glClearStencil(GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 294, column 10>
//   // proto:  void QOpenGLFunctions::glStencilMask(GLuint mask);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glStencilMask(arg1);
  };
}
// _ZN16QOpenGLFunctions13glStencilMaskEj glStencilMask(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 349, column 10>
//   // proto:  void QOpenGLFunctions::glGetShaderInfoLog(GLuint shader, GLsizei bufsize, GLsizei * length, char * infolog);
if (false) {
  auto f = [](GLuint arg1, GLsizei arg2, GLsizei * arg3, char * arg4) {
    ((QOpenGLFunctions*)0)->glGetShaderInfoLog(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions18glGetShaderInfoLogEjiPiPc glGetShaderInfoLog(GLuint, GLsizei, GLsizei *, char *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 364, column 10>
//   // proto:  void QOpenGLFunctions::glReleaseShaderCompiler();
if (false) {
  auto f = []() {
    ((QOpenGLFunctions*)0)->glReleaseShaderCompiler();
  };
}
// _ZN16QOpenGLFunctions23glReleaseShaderCompilerEv glReleaseShaderCompiler()
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 269, column 10>
//   // proto:  void QOpenGLFunctions::glDepthMask(GLboolean flag);
if (false) {
  auto f = [](GLboolean arg1) {
    ((QOpenGLFunctions*)0)->glDepthMask(arg1);
  };
}
// _ZN16QOpenGLFunctions11glDepthMaskEh glDepthMask(GLboolean)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 344, column 10>
//   // proto:  void QOpenGLFunctions::glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLenum arg3, GLint * arg4) {
    ((QOpenGLFunctions*)0)->glGetFramebufferAttachmentParameteriv(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions37glGetFramebufferAttachmentParameterivEjjjPi glGetFramebufferAttachmentParameteriv(GLenum, GLenum, GLenum, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 372, column 10>
//   // proto:  void QOpenGLFunctions::glUniform1f(GLint location, GLfloat x);
if (false) {
  auto f = [](GLint arg1, GLfloat arg2) {
    ((QOpenGLFunctions*)0)->glUniform1f(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions11glUniform1fEif glUniform1f(GLint, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 341, column 10>
//   // proto:  void QOpenGLFunctions::glGetAttachedShaders(GLuint program, GLsizei maxcount, GLsizei * count, GLuint * shaders);
if (false) {
  auto f = [](GLuint arg1, GLsizei arg2, GLsizei * arg3, GLuint * arg4) {
    ((QOpenGLFunctions*)0)->glGetAttachedShaders(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions20glGetAttachedShadersEjiPiPj glGetAttachedShaders(GLuint, GLsizei, GLsizei *, GLuint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 295, column 10>
//   // proto:  void QOpenGLFunctions::glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLenum arg3) {
    ((QOpenGLFunctions*)0)->glStencilOp(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions11glStencilOpEjjj glStencilOp(GLenum, GLenum, GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 293, column 10>
//   // proto:  void QOpenGLFunctions::glStencilFunc(GLenum func, GLint ref, GLuint mask);
if (false) {
  auto f = [](GLenum arg1, GLint arg2, GLuint arg3) {
    ((QOpenGLFunctions*)0)->glStencilFunc(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions13glStencilFuncEjij glStencilFunc(GLenum, GLint, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 306, column 10>
//   // proto:  void QOpenGLFunctions::glAttachShader(GLuint program, GLuint shader);
if (false) {
  auto f = [](GLuint arg1, GLuint arg2) {
    ((QOpenGLFunctions*)0)->glAttachShader(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions14glAttachShaderEjj glAttachShader(GLuint, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 328, column 10>
//   // proto:  void QOpenGLFunctions::glDeleteShader(GLuint shader);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glDeleteShader(arg1);
  };
}
// _ZN16QOpenGLFunctions14glDeleteShaderEj glDeleteShader(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 319, column 10>
//   // proto:  void QOpenGLFunctions::glCompileShader(GLuint shader);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glCompileShader(arg1);
  };
}
// _ZN16QOpenGLFunctions15glCompileShaderEj glCompileShader(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 332, column 10>
//   // proto:  void QOpenGLFunctions::glEnableVertexAttribArray(GLuint index);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glEnableVertexAttribArray(arg1);
  };
}
// _ZN16QOpenGLFunctions25glEnableVertexAttribArrayEj glEnableVertexAttribArray(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 333, column 10>
//   // proto:  void QOpenGLFunctions::glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLenum arg3, GLuint arg4) {
    ((QOpenGLFunctions*)0)->glFramebufferRenderbuffer(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions25glFramebufferRenderbufferEjjjj glFramebufferRenderbuffer(GLenum, GLenum, GLenum, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 263, column 10>
//   // proto:  void QOpenGLFunctions::glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
if (false) {
  auto f = [](GLboolean arg1, GLboolean arg2, GLboolean arg3, GLboolean arg4) {
    ((QOpenGLFunctions*)0)->glColorMask(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions11glColorMaskEhhhh glColorMask(GLboolean, GLboolean, GLboolean, GLboolean)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 286, column 15>
//   // proto:  GLboolean QOpenGLFunctions::glIsEnabled(GLenum cap);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glIsEnabled(arg1);
  };
}
// _ZN16QOpenGLFunctions11glIsEnabledEj glIsEnabled(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 310, column 10>
//   // proto:  void QOpenGLFunctions::glBindRenderbuffer(GLenum target, GLuint renderbuffer);
if (false) {
  auto f = [](GLenum arg1, GLuint arg2) {
    ((QOpenGLFunctions*)0)->glBindRenderbuffer(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions18glBindRenderbufferEjj glBindRenderbuffer(GLenum, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 398, column 10>
//   // proto:  void QOpenGLFunctions::glVertexAttrib3fv(GLuint indx, const GLfloat * values);
if (false) {
  auto f = [](GLuint arg1, const GLfloat * arg2) {
    ((QOpenGLFunctions*)0)->glVertexAttrib3fv(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions17glVertexAttrib3fvEjPKf glVertexAttrib3fv(GLuint, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 259, column 10>
//   // proto:  void QOpenGLFunctions::glBlendFunc(GLenum sfactor, GLenum dfactor);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2) {
    ((QOpenGLFunctions*)0)->glBlendFunc(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions11glBlendFuncEjj glBlendFunc(GLenum, GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 380, column 10>
//   // proto:  void QOpenGLFunctions::glUniform3f(GLint location, GLfloat x, GLfloat y, GLfloat z);
if (false) {
  auto f = [](GLint arg1, GLfloat arg2, GLfloat arg3, GLfloat arg4) {
    ((QOpenGLFunctions*)0)->glUniform3f(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions11glUniform3fEifff glUniform3f(GLint, GLfloat, GLfloat, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 399, column 10>
//   // proto:  void QOpenGLFunctions::glVertexAttrib4f(GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
if (false) {
  auto f = [](GLuint arg1, GLfloat arg2, GLfloat arg3, GLfloat arg4, GLfloat arg5) {
    ((QOpenGLFunctions*)0)->glVertexAttrib4f(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN16QOpenGLFunctions16glVertexAttrib4fEjffff glVertexAttrib4f(GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 342, column 11>
//   // proto:  GLint QOpenGLFunctions::glGetAttribLocation(GLuint program, const char * name);
if (false) {
  auto f = [](GLuint arg1, const char * arg2) {
    ((QOpenGLFunctions*)0)->glGetAttribLocation(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions19glGetAttribLocationEjPKc glGetAttribLocation(GLuint, const char *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 379, column 10>
//   // proto:  void QOpenGLFunctions::glUniform2iv(GLint location, GLsizei count, const GLint * v);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, const GLint * arg3) {
    ((QOpenGLFunctions*)0)->glUniform2iv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions12glUniform2ivEiiPKi glUniform2iv(GLint, GLsizei, const GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 353, column 10>
//   // proto:  void QOpenGLFunctions::glGetUniformiv(GLuint program, GLint location, GLint * params);
if (false) {
  auto f = [](GLuint arg1, GLint arg2, GLint * arg3) {
    ((QOpenGLFunctions*)0)->glGetUniformiv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions14glGetUniformivEjiPi glGetUniformiv(GLuint, GLint, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 316, column 10>
//   // proto:  void QOpenGLFunctions::glBufferSubData(GLenum target, qopengl_GLintptr offset, qopengl_GLsizeiptr size, const void * data);
if (false) {
  auto f = [](GLenum arg1, qopengl_GLintptr arg2, qopengl_GLsizeiptr arg3, const void * arg4) {
    ((QOpenGLFunctions*)0)->glBufferSubData(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions15glBufferSubDataEjiiPKv glBufferSubData(GLenum, qopengl_GLintptr, qopengl_GLsizeiptr, const void *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 391, column 10>
//   // proto:  void QOpenGLFunctions::glUseProgram(GLuint program);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glUseProgram(arg1);
  };
}
// _ZN16QOpenGLFunctions12glUseProgramEj glUseProgram(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 270, column 10>
//   // proto:  void QOpenGLFunctions::glDisable(GLenum cap);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glDisable(arg1);
  };
}
// _ZN16QOpenGLFunctions9glDisableEj glDisable(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 384, column 10>
//   // proto:  void QOpenGLFunctions::glUniform4f(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
if (false) {
  auto f = [](GLint arg1, GLfloat arg2, GLfloat arg3, GLfloat arg4, GLfloat arg5) {
    ((QOpenGLFunctions*)0)->glUniform4f(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN16QOpenGLFunctions11glUniform4fEiffff glUniform4f(GLint, GLfloat, GLfloat, GLfloat, GLfloat)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 369, column 10>
//   // proto:  void QOpenGLFunctions::glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLint arg3, GLuint arg4) {
    ((QOpenGLFunctions*)0)->glStencilFuncSeparate(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions21glStencilFuncSeparateEjjij glStencilFuncSeparate(GLenum, GLenum, GLint, GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 264, column 10>
//   // proto:  void QOpenGLFunctions::glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
if (false) {
  auto f = [](GLenum arg1, GLint arg2, GLenum arg3, GLint arg4, GLint arg5, GLsizei arg6, GLsizei arg7, GLint arg8) {
    ((QOpenGLFunctions*)0)->glCopyTexImage2D(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
  };
}
// _ZN16QOpenGLFunctions16glCopyTexImage2DEjijiiiii glCopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 363, column 10>
//   // proto:  void QOpenGLFunctions::glLinkProgram(GLuint program);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glLinkProgram(arg1);
  };
}
// _ZN16QOpenGLFunctions13glLinkProgramEj glLinkProgram(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 315, column 10>
//   // proto:  void QOpenGLFunctions::glBufferData(GLenum target, qopengl_GLsizeiptr size, const void * data, GLenum usage);
if (false) {
  auto f = [](GLenum arg1, qopengl_GLsizeiptr arg2, const void * arg3, GLenum arg4) {
    ((QOpenGLFunctions*)0)->glBufferData(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions12glBufferDataEjiPKvj glBufferData(GLenum, qopengl_GLsizeiptr, const void *, GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 352, column 10>
//   // proto:  void QOpenGLFunctions::glGetUniformfv(GLuint program, GLint location, GLfloat * params);
if (false) {
  auto f = [](GLuint arg1, GLint arg2, GLfloat * arg3) {
    ((QOpenGLFunctions*)0)->glGetUniformfv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions14glGetUniformfvEjiPf glGetUniformfv(GLuint, GLint, GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 365, column 10>
//   // proto:  void QOpenGLFunctions::glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLsizei arg3, GLsizei arg4) {
    ((QOpenGLFunctions*)0)->glRenderbufferStorage(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions21glRenderbufferStorageEjjii glRenderbufferStorage(GLenum, GLenum, GLsizei, GLsizei)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 362, column 15>
//   // proto:  GLboolean QOpenGLFunctions::glIsShader(GLuint shader);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glIsShader(arg1);
  };
}
// _ZN16QOpenGLFunctions10glIsShaderEj glIsShader(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 374, column 10>
//   // proto:  void QOpenGLFunctions::glUniform1i(GLint location, GLint x);
if (false) {
  auto f = [](GLint arg1, GLint arg2) {
    ((QOpenGLFunctions*)0)->glUniform1i(arg1, arg2);
  };
}
// _ZN16QOpenGLFunctions11glUniform1iEii glUniform1i(GLint, GLint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 314, column 10>
//   // proto:  void QOpenGLFunctions::glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLenum arg3, GLenum arg4) {
    ((QOpenGLFunctions*)0)->glBlendFuncSeparate(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions19glBlendFuncSeparateEjjjj glBlendFuncSeparate(GLenum, GLenum, GLenum, GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 298, column 10>
//   // proto:  void QOpenGLFunctions::glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, const GLfloat * arg3) {
    ((QOpenGLFunctions*)0)->glTexParameterfv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions16glTexParameterfvEjjPKf glTexParameterfv(GLenum, GLenum, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 390, column 10>
//   // proto:  void QOpenGLFunctions::glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
if (false) {
  auto f = [](GLint arg1, GLsizei arg2, GLboolean arg3, const GLfloat * arg4) {
    ((QOpenGLFunctions*)0)->glUniformMatrix4fv(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions18glUniformMatrix4fvEiihPKf glUniformMatrix4fv(GLint, GLsizei, GLboolean, const GLfloat *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 392, column 10>
//   // proto:  void QOpenGLFunctions::glValidateProgram(GLuint program);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glValidateProgram(arg1);
  };
}
// _ZN16QOpenGLFunctions17glValidateProgramEj glValidateProgram(GLuint)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 275, column 10>
//   // proto:  void QOpenGLFunctions::glFlush();
if (false) {
  auto f = []() {
    ((QOpenGLFunctions*)0)->glFlush();
  };
}
// _ZN16QOpenGLFunctions7glFlushEv glFlush()
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 317, column 12>
//   // proto:  GLenum QOpenGLFunctions::glCheckFramebufferStatus(GLenum target);
if (false) {
  auto f = [](GLenum arg1) {
    ((QOpenGLFunctions*)0)->glCheckFramebufferStatus(arg1);
  };
}
// _ZN16QOpenGLFunctions24glCheckFramebufferStatusEj glCheckFramebufferStatus(GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 371, column 10>
//   // proto:  void QOpenGLFunctions::glStencilOpSeparate(GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLenum arg3, GLenum arg4) {
    ((QOpenGLFunctions*)0)->glStencilOpSeparate(arg1, arg2, arg3, arg4);
  };
}
// _ZN16QOpenGLFunctions19glStencilOpSeparateEjjjj glStencilOpSeparate(GLenum, GLenum, GLenum, GLenum)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 284, column 10>
//   // proto:  void QOpenGLFunctions::glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);
if (false) {
  auto f = [](GLenum arg1, GLenum arg2, GLint * arg3) {
    ((QOpenGLFunctions*)0)->glGetTexParameteriv(arg1, arg2, arg3);
  };
}
// _ZN16QOpenGLFunctions19glGetTexParameterivEjjPi glGetTexParameteriv(GLenum, GLenum, GLint *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 260, column 10>
//   // proto:  void QOpenGLFunctions::glClear(GLbitfield mask);
if (false) {
  auto f = [](GLbitfield arg1) {
    ((QOpenGLFunctions*)0)->glClear(arg1);
  };
}
// _ZN16QOpenGLFunctions7glClearEj glClear(GLbitfield)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 340, column 10>
//   // proto:  void QOpenGLFunctions::glGetActiveUniform(GLuint program, GLuint index, GLsizei bufsize, GLsizei * length, GLint * size, GLenum * type, char * name);
if (false) {
  auto f = [](GLuint arg1, GLuint arg2, GLsizei arg3, GLsizei * arg4, GLint * arg5, GLenum * arg6, char * arg7) {
    ((QOpenGLFunctions*)0)->glGetActiveUniform(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
}
// _ZN16QOpenGLFunctions18glGetActiveUniformEjjiPiS0_PjPc glGetActiveUniform(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, char *)
// <SourceLocation file '/usr/include/qt/QtGui/qopenglfunctions.h', line 331, column 10>
//   // proto:  void QOpenGLFunctions::glDisableVertexAttribArray(GLuint index);
if (false) {
  auto f = [](GLuint arg1) {
    ((QOpenGLFunctions*)0)->glDisableVertexAttribArray(arg1);
  };
}
// _ZN16QOpenGLFunctions26glDisableVertexAttribArrayEj glDisableVertexAttribArray(GLuint)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

