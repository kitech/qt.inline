// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qopenglshaderprogram.h
// dst-file: /src/gui/qopenglshaderprogram.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglshaderprogram.h>


#include <qstring.h>
#include <qbytearray.h>
#include <qvector.h>
#include <qimage.h>
#include <qlist.h>
#include <qstandarditemmodel.h>
// <= header block end

// main block begin =>
void __keep_qopenglshaderprogram_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLShader_Class_Size()
{
  return sizeof(QOpenGLShader);
}

extern "C"
int QOpenGLShaderProgram_Class_Size()
{
  return sizeof(QOpenGLShaderProgram);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 81, column 10>
//   // proto:  bool QOpenGLShader::isCompiled();
// _ZNK13QOpenGLShader10isCompiledEv isCompiled()
extern "C"
bool
C_ZNK13QOpenGLShader10isCompiledEv(void *qthis) {
  auto ret =
  ((QOpenGLShader*)qthis)->isCompiled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 56, column 5>
//   // proto:  const QMetaObject * QOpenGLShader::metaObject();
// _ZNK13QOpenGLShader10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QOpenGLShader10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLShader*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 82, column 13>
//   // proto:  QString QOpenGLShader::log();
// _ZNK13QOpenGLShader3logEv log()
extern "C"
QString*
C_ZNK13QOpenGLShader3logEv(void *qthis) {
  auto ret =
  ((QOpenGLShader*)qthis)->log();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 76, column 10>
//   // proto:  bool QOpenGLShader::compileSourceCode(const QString & source);
// _ZN13QOpenGLShader17compileSourceCodeERK7QString compileSourceCode(const class QString &)
extern "C"
bool
C_ZN13QOpenGLShader17compileSourceCodeERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QOpenGLShader*)qthis)->compileSourceCode(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 77, column 10>
//   // proto:  bool QOpenGLShader::compileSourceFile(const QString & fileName);
// _ZN13QOpenGLShader17compileSourceFileERK7QString compileSourceFile(const class QString &)
extern "C"
bool
C_ZN13QOpenGLShader17compileSourceFileERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QOpenGLShader*)qthis)->compileSourceFile(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 79, column 16>
//   // proto:  QByteArray QOpenGLShader::sourceCode();
// _ZNK13QOpenGLShader10sourceCodeEv sourceCode()
extern "C"
QByteArray*
C_ZNK13QOpenGLShader10sourceCodeEv(void *qthis) {
  auto ret =
  ((QOpenGLShader*)qthis)->sourceCode();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 72, column 31>
//   // proto:  QOpenGLShader::ShaderType QOpenGLShader::shaderType();
// _ZNK13QOpenGLShader10shaderTypeEv shaderType()
extern "C"
QFlags<QOpenGLShader::ShaderTypeBit>*
C_ZNK13QOpenGLShader10shaderTypeEv(void *qthis) {
  auto ret =
  ((QOpenGLShader*)qthis)->shaderType();
  return new QFlags<QOpenGLShader::ShaderTypeBit>(ret); // 5
}
//   // proto:  void QOpenGLShader::~QOpenGLShader();
extern "C"
void C_ZN13QOpenGLShaderD2Ev(void *qthis) {
  delete (QOpenGLShader*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 75, column 10>
//   // proto:  bool QOpenGLShader::compileSourceCode(const QByteArray & source);
// _ZN13QOpenGLShader17compileSourceCodeERK10QByteArray compileSourceCode(const class QByteArray &)
extern "C"
bool
C_ZN13QOpenGLShader17compileSourceCodeERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QOpenGLShader*)qthis)->compileSourceCode(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 84, column 12>
//   // proto:  GLuint QOpenGLShader::shaderId();
// _ZNK13QOpenGLShader8shaderIdEv shaderId()
extern "C"
unsigned int
C_ZNK13QOpenGLShader8shaderIdEv(void *qthis) {
  auto ret =
  ((QOpenGLShader*)qthis)->shaderId();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 74, column 10>
//   // proto:  bool QOpenGLShader::compileSourceCode(const char * source);
// _ZN13QOpenGLShader17compileSourceCodeEPKc compileSourceCode(const char *)
extern "C"
bool
C_ZN13QOpenGLShader17compileSourceCodeEPKc(void *qthis,
const char * arg1) {
  auto ret =
  ((QOpenGLShader*)qthis)->compileSourceCode(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 69, column 14>
//   // proto:  void QOpenGLShader::QOpenGLShader(QOpenGLShader::ShaderType type, QObject * parent);
extern "C"
QOpenGLShader*
C_ZN13QOpenGLShaderC2E6QFlagsINS_13ShaderTypeBitEEP7QObject(QOpenGLShader::ShaderType* arg1,
QObject * arg2) {
  auto ret = new QOpenGLShader(*((QOpenGLShader::ShaderType*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 86, column 17>
//   // proto: static bool QOpenGLShader::hasOpenGLShaders(ShaderType type, QOpenGLContext * context);
// _ZN13QOpenGLShader16hasOpenGLShadersE6QFlagsINS_13ShaderTypeBitEEP14QOpenGLContext hasOpenGLShaders(ShaderType, class QOpenGLContext *)
extern "C"
bool
C_ZN13QOpenGLShader16hasOpenGLShadersE6QFlagsINS_13ShaderTypeBitEEP14QOpenGLContext(QOpenGLShader::ShaderType arg1,
QOpenGLContext * arg2) {
  auto ret =
  QOpenGLShader::hasOpenGLShaders(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 112, column 10>
//   // proto:  bool QOpenGLShaderProgram::addShaderFromSourceCode(QOpenGLShader::ShaderType type, const QByteArray & source);
// _ZN20QOpenGLShaderProgram23addShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK10QByteArray addShaderFromSourceCode(class QOpenGLShader::ShaderType, const class QByteArray &)
extern "C"
bool
C_ZN20QOpenGLShaderProgram23addShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK10QByteArray(void *qthis,
QOpenGLShader::ShaderType* arg1,
const QByteArray* arg2) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->addShaderFromSourceCode(*((QOpenGLShader::ShaderType*)arg1),
*((const QByteArray*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 119, column 10>
//   // proto:  bool QOpenGLShaderProgram::isLinked();
// _ZNK20QOpenGLShaderProgram8isLinkedEv isLinked()
extern "C"
bool
C_ZNK20QOpenGLShaderProgram8isLinkedEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->isLinked();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 238, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QVector3D & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK9QVector3D setUniformValue(const char *, const class QVector3D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK9QVector3D(void *qthis,
const char * arg1,
const QVector3D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QVector3D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 213, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QPoint & point);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK6QPoint setUniformValue(int, const class QPoint &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK6QPoint(void *qthis,
int arg1,
const QPoint* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QPoint*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 236, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcffff setUniformValue(const char *, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcffff(void *qthis,
const char * arg1,
GLfloat arg2,
GLfloat arg3,
GLfloat arg4,
GLfloat arg5) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 163, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(const char * name, const QVector3D & value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK9QVector3D setAttributeValue(const char *, const class QVector3D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK9QVector3D(void *qthis,
const char * arg1,
const QVector3D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
*((const QVector3D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 279, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QVector3D * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK9QVector3Di setUniformValueArray(const char *, const class QVector3D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK9QVector3Di(void *qthis,
const char * arg1,
const QVector3D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 229, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QTransform & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK10QTransform setUniformValue(int, const class QTransform &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK10QTransform(void *qthis,
int arg1,
const QTransform* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QTransform*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 189, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeBuffer(int location, GLenum type, int offset, int tupleSize, int stride);
// _ZN20QOpenGLShaderProgram18setAttributeBufferEijiii setAttributeBuffer(int, GLenum, int, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram18setAttributeBufferEijiii(void *qthis,
int arg1,
GLenum arg2,
int arg3,
int arg4,
int arg5) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeBuffer(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 291, column 17>
//   // proto: static bool QOpenGLShaderProgram::hasOpenGLShaderPrograms(QOpenGLContext * context);
// _ZN20QOpenGLShaderProgram23hasOpenGLShaderProgramsEP14QOpenGLContext hasOpenGLShaderPrograms(class QOpenGLContext *)
extern "C"
bool
C_ZN20QOpenGLShaderProgram23hasOpenGLShaderProgramsEP14QOpenGLContext(QOpenGLContext * arg1) {
  auto ret =
  QOpenGLShaderProgram::hasOpenGLShaderPrograms(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 218, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QMatrix2x3 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi2ELi3EfE setUniformValue(int, const QMatrix2x3 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi2ELi3EfE(void *qthis,
int arg1,
const QMatrix2x3* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix2x3*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 285, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QMatrix3x3 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi3ELi3EfEi setUniformValueArray(const char *, const QMatrix3x3 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi3ELi3EfEi(void *qthis,
const char * arg1,
const QMatrix3x3 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 254, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const GLfloat [2][2] value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcPA2_Kf setUniformValue(const char *, const GLfloat (*)[2])
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcPA2_Kf(void *qthis,
const char * arg1,
const GLfloat arg2[2][2]) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 131, column 10>
//   // proto:  void QOpenGLShaderProgram::setPatchVertexCount(int count);
// _ZN20QOpenGLShaderProgram19setPatchVertexCountEi setPatchVertexCount(int)
extern "C"
void
C_ZN20QOpenGLShaderProgram19setPatchVertexCountEi(void *qthis,
int arg1) {
  ((QOpenGLShaderProgram*)qthis)->setPatchVertexCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 249, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QMatrix3x3 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi3ELi3EfE setUniformValue(const char *, const QMatrix3x3 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi3ELi3EfE(void *qthis,
const char * arg1,
const QMatrix3x3* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix3x3*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 266, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QMatrix2x3 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi2ELi3EfEi setUniformValueArray(int, const QMatrix2x3 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi2ELi3EfEi(void *qthis,
int arg1,
const QMatrix2x3 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 114, column 10>
//   // proto:  bool QOpenGLShaderProgram::addShaderFromSourceFile(QOpenGLShader::ShaderType type, const QString & fileName);
// _ZN20QOpenGLShaderProgram23addShaderFromSourceFileE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK7QString addShaderFromSourceFile(class QOpenGLShader::ShaderType, const class QString &)
extern "C"
bool
C_ZN20QOpenGLShaderProgram23addShaderFromSourceFileE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK7QString(void *qthis,
QOpenGLShader::ShaderType* arg1,
const QString* arg2) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->addShaderFromSourceFile(*((QOpenGLShader::ShaderType*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 178, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(const char * name, const GLfloat * values, int tupleSize, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPKfii setAttributeArray(const char *, const GLfloat *, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPKfii(void *qthis,
const char * arg1,
const GLfloat * arg2,
int arg3,
int arg4) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 220, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QMatrix3x2 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi3ELi2EfE setUniformValue(int, const QMatrix3x2 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi3ELi2EfE(void *qthis,
int arg1,
const QMatrix3x2* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix3x2*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 252, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QMatrix4x3 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi4ELi3EfE setUniformValue(const char *, const QMatrix4x3 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi4ELi3EfE(void *qthis,
const char * arg1,
const QMatrix4x3* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix4x3*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 263, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QVector3D * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK9QVector3Di setUniformValueArray(int, const class QVector3D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK9QVector3Di(void *qthis,
int arg1,
const QVector3D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 255, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const GLfloat [3][3] value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcPA3_Kf setUniformValue(const char *, const GLfloat (*)[3])
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcPA3_Kf(void *qthis,
const char * arg1,
const GLfloat arg2[3][3]) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 209, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QVector2D & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK9QVector2D setUniformValue(int, const class QVector2D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK9QVector2D(void *qthis,
int arg1,
const QVector2D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QVector2D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 141, column 10>
//   // proto:  void QOpenGLShaderProgram::bindAttributeLocation(const QByteArray & name, int location);
// _ZN20QOpenGLShaderProgram21bindAttributeLocationERK10QByteArrayi bindAttributeLocation(const class QByteArray &, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram21bindAttributeLocationERK10QByteArrayi(void *qthis,
const QByteArray* arg1,
int arg2) {
  ((QOpenGLShaderProgram*)qthis)->bindAttributeLocation(*((const QByteArray*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 275, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const GLfloat * values, int count, int tupleSize);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPKfii setUniformValueArray(const char *, const GLfloat *, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPKfii(void *qthis,
const char * arg1,
const GLfloat * arg2,
int arg3,
int arg4) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 149, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(int location, GLfloat x, GLfloat y);
// _ZN20QOpenGLShaderProgram17setAttributeValueEiff setAttributeValue(int, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEiff(void *qthis,
int arg1,
GLfloat arg2,
GLfloat arg3) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 162, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(const char * name, const QVector2D & value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK9QVector2D setAttributeValue(const char *, const class QVector2D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK9QVector2D(void *qthis,
const char * arg1,
const QVector2D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
*((const QVector2D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 155, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(int location, const QColor & value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEiRK6QColor setAttributeValue(int, const class QColor &)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEiRK6QColor(void *qthis,
int arg1,
const QColor* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
*((const QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 150, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(int location, GLfloat x, GLfloat y, GLfloat z);
// _ZN20QOpenGLShaderProgram17setAttributeValueEifff setAttributeValue(int, GLfloat, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEifff(void *qthis,
int arg1,
GLfloat arg2,
GLfloat arg3,
GLfloat arg4) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 122, column 10>
//   // proto:  bool QOpenGLShaderProgram::bind();
// _ZN20QOpenGLShaderProgram4bindEv bind()
extern "C"
bool
C_ZN20QOpenGLShaderProgram4bindEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->bind();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 203, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, GLfloat value);
// _ZN20QOpenGLShaderProgram15setUniformValueEif setUniformValue(int, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEif(void *qthis,
int arg1,
GLfloat arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 194, column 10>
//   // proto:  void QOpenGLShaderProgram::enableAttributeArray(int location);
// _ZN20QOpenGLShaderProgram20enableAttributeArrayEi enableAttributeArray(int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20enableAttributeArrayEi(void *qthis,
int arg1) {
  ((QOpenGLShaderProgram*)qthis)->enableAttributeArray(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 247, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QMatrix2x4 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi2ELi4EfE setUniformValue(const char *, const QMatrix2x4 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi2ELi4EfE(void *qthis,
const char * arg1,
const QMatrix2x4* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix2x4*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 267, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QMatrix2x4 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi2ELi4EfEi setUniformValueArray(int, const QMatrix2x4 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi2ELi4EfEi(void *qthis,
int arg1,
const QMatrix2x4 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 286, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QMatrix3x4 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi3ELi4EfEi setUniformValueArray(const char *, const QMatrix3x4 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi3ELi4EfEi(void *qthis,
const char * arg1,
const QMatrix3x4 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 204, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, GLint value);
// _ZN20QOpenGLShaderProgram15setUniformValueEii setUniformValue(int, GLint)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEii(void *qthis,
int arg1,
GLint arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 205, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, GLuint value);
// _ZN20QOpenGLShaderProgram15setUniformValueEij setUniformValue(int, GLuint)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEij(void *qthis,
int arg1,
GLuint arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 215, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QSize & size);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK5QSize setUniformValue(int, const class QSize &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK5QSize(void *qthis,
int arg1,
const QSize* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QSize*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 107, column 10>
//   // proto:  bool QOpenGLShaderProgram::addShader(QOpenGLShader * shader);
// _ZN20QOpenGLShaderProgram9addShaderEP13QOpenGLShader addShader(class QOpenGLShader *)
extern "C"
bool
C_ZN20QOpenGLShaderProgram9addShaderEP13QOpenGLShader(void *qthis,
QOpenGLShader * arg1) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->addShader(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 146, column 9>
//   // proto:  int QOpenGLShaderProgram::attributeLocation(const QString & name);
// _ZNK20QOpenGLShaderProgram17attributeLocationERK7QString attributeLocation(const class QString &)
extern "C"
int
C_ZNK20QOpenGLShaderProgram17attributeLocationERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->attributeLocation(*((const QString*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 176, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(int location, GLenum type, const void * values, int tupleSize, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEijPKvii setAttributeArray(int, GLenum, const void *, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEijPKvii(void *qthis,
int arg1,
GLenum arg2,
const void * arg3,
int arg4,
int arg5) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 217, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QMatrix2x2 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi2ELi2EfE setUniformValue(int, const QMatrix2x2 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi2ELi2EfE(void *qthis,
int arg1,
const QMatrix2x2* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix2x2*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 241, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QPoint & point);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK6QPoint setUniformValue(const char *, const class QPoint &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK6QPoint(void *qthis,
const char * arg1,
const QPoint* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QPoint*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 273, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QMatrix4x4 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK10QMatrix4x4i setUniformValueArray(int, const class QMatrix4x4 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK10QMatrix4x4i(void *qthis,
int arg1,
const QMatrix4x4 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 270, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QMatrix3x4 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi3ELi4EfEi setUniformValueArray(int, const QMatrix3x4 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi3ELi4EfEi(void *qthis,
int arg1,
const QMatrix3x4 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 170, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(int location, const QVector2D * values, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEiPK9QVector2Di setAttributeArray(int, const class QVector2D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEiPK9QVector2Di(void *qthis,
int arg1,
const QVector2D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 206, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, GLfloat x, GLfloat y);
// _ZN20QOpenGLShaderProgram15setUniformValueEiff setUniformValue(int, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiff(void *qthis,
int arg1,
GLfloat arg2,
GLfloat arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 289, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QMatrix4x4 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK10QMatrix4x4i setUniformValueArray(const char *, const class QMatrix4x4 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK10QMatrix4x4i(void *qthis,
const char * arg1,
const QMatrix4x4 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 165, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(const char * name, const QColor & value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK6QColor setAttributeValue(const char *, const class QColor &)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK6QColor(void *qthis,
const char * arg1,
const QColor* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
*((const QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 282, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QMatrix2x3 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi2ELi3EfEi setUniformValueArray(const char *, const QMatrix2x3 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi2ELi3EfEi(void *qthis,
const char * arg1,
const QMatrix2x3 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 161, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(const char * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
// _ZN20QOpenGLShaderProgram17setAttributeValueEPKcffff setAttributeValue(const char *, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcffff(void *qthis,
const char * arg1,
GLfloat arg2,
GLfloat arg3,
GLfloat arg4,
GLfloat arg5) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 127, column 12>
//   // proto:  GLuint QOpenGLShaderProgram::programId();
// _ZNK20QOpenGLShaderProgram9programIdEv programId()
extern "C"
unsigned int
C_ZNK20QOpenGLShaderProgram9programIdEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->programId();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 261, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const GLuint * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPKji setUniformValueArray(int, const GLuint *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPKji(void *qthis,
int arg1,
const GLuint * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 287, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QMatrix4x2 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi4ELi2EfEi setUniformValueArray(const char *, const QMatrix4x2 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi4ELi2EfEi(void *qthis,
const char * arg1,
const QMatrix4x2 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 196, column 10>
//   // proto:  void QOpenGLShaderProgram::disableAttributeArray(int location);
// _ZN20QOpenGLShaderProgram21disableAttributeArrayEi disableAttributeArray(int)
extern "C"
void
C_ZN20QOpenGLShaderProgram21disableAttributeArrayEi(void *qthis,
int arg1) {
  ((QOpenGLShaderProgram*)qthis)->disableAttributeArray(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 276, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const GLint * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPKii setUniformValueArray(const char *, const GLint *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPKii(void *qthis,
const char * arg1,
const GLint * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 277, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const GLuint * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPKji setUniformValueArray(const char *, const GLuint *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPKji(void *qthis,
const char * arg1,
const GLuint * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 166, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(const char * name, const GLfloat * values, int columns, int rows);
// _ZN20QOpenGLShaderProgram17setAttributeValueEPKcPKfii setAttributeValue(const char *, const GLfloat *, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcPKfii(void *qthis,
const char * arg1,
const GLfloat * arg2,
int arg3,
int arg4) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 134, column 10>
//   // proto:  void QOpenGLShaderProgram::setDefaultOuterTessellationLevels(const QVector<float> & levels);
// _ZN20QOpenGLShaderProgram33setDefaultOuterTessellationLevelsERK7QVectorIfE setDefaultOuterTessellationLevels(const QVector<float> &)
extern "C"
void
C_ZN20QOpenGLShaderProgram33setDefaultOuterTessellationLevelsERK7QVectorIfE(void *qthis,
const QVector<float>* arg1) {
  ((QOpenGLShaderProgram*)qthis)->setDefaultOuterTessellationLevels(*((const QVector<float>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 184, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(const char * name, const QVector4D * values, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPK9QVector4Di setAttributeArray(const char *, const class QVector4D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPK9QVector4Di(void *qthis,
const char * arg1,
const QVector4D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 152, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(int location, const QVector2D & value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEiRK9QVector2D setAttributeValue(int, const class QVector2D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEiRK9QVector2D(void *qthis,
int arg1,
const QVector2D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
*((const QVector2D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 207, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, GLfloat x, GLfloat y, GLfloat z);
// _ZN20QOpenGLShaderProgram15setUniformValueEifff setUniformValue(int, GLfloat, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEifff(void *qthis,
int arg1,
GLfloat arg2,
GLfloat arg3,
GLfloat arg4) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 151, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(int location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
// _ZN20QOpenGLShaderProgram17setAttributeValueEiffff setAttributeValue(int, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEiffff(void *qthis,
int arg1,
GLfloat arg2,
GLfloat arg3,
GLfloat arg4,
GLfloat arg5) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 140, column 10>
//   // proto:  void QOpenGLShaderProgram::bindAttributeLocation(const char * name, int location);
// _ZN20QOpenGLShaderProgram21bindAttributeLocationEPKci bindAttributeLocation(const char *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram21bindAttributeLocationEPKci(void *qthis,
const char * arg1,
int arg2) {
  ((QOpenGLShaderProgram*)qthis)->bindAttributeLocation(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 268, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QMatrix3x2 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi3ELi2EfEi setUniformValueArray(int, const QMatrix3x2 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi3ELi2EfEi(void *qthis,
int arg1,
const QMatrix3x2 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 111, column 10>
//   // proto:  bool QOpenGLShaderProgram::addShaderFromSourceCode(QOpenGLShader::ShaderType type, const char * source);
// _ZN20QOpenGLShaderProgram23addShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEEPKc addShaderFromSourceCode(class QOpenGLShader::ShaderType, const char *)
extern "C"
bool
C_ZN20QOpenGLShaderProgram23addShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEEPKc(void *qthis,
QOpenGLShader::ShaderType* arg1,
const char * arg2) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->addShaderFromSourceCode(*((QOpenGLShader::ShaderType*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 144, column 9>
//   // proto:  int QOpenGLShaderProgram::attributeLocation(const char * name);
// _ZNK20QOpenGLShaderProgram17attributeLocationEPKc attributeLocation(const char *)
extern "C"
int
C_ZNK20QOpenGLShaderProgram17attributeLocationEPKc(void *qthis,
const char * arg1) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->attributeLocation(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 201, column 9>
//   // proto:  int QOpenGLShaderProgram::uniformLocation(const QString & name);
// _ZNK20QOpenGLShaderProgram15uniformLocationERK7QString uniformLocation(const class QString &)
extern "C"
int
C_ZNK20QOpenGLShaderProgram15uniformLocationERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->uniformLocation(*((const QString*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 242, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QPointF & point);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK7QPointF setUniformValue(const char *, const class QPointF &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK7QPointF(void *qthis,
const char * arg1,
const QPointF* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QPointF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 137, column 10>
//   // proto:  void QOpenGLShaderProgram::setDefaultInnerTessellationLevels(const QVector<float> & levels);
// _ZN20QOpenGLShaderProgram33setDefaultInnerTessellationLevelsERK7QVectorIfE setDefaultInnerTessellationLevels(const QVector<float> &)
extern "C"
void
C_ZN20QOpenGLShaderProgram33setDefaultInnerTessellationLevelsERK7QVectorIfE(void *qthis,
const QVector<float>* arg1) {
  ((QOpenGLShaderProgram*)qthis)->setDefaultInnerTessellationLevels(*((const QVector<float>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 164, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(const char * name, const QVector4D & value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK9QVector4D setAttributeValue(const char *, const class QVector4D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK9QVector4D(void *qthis,
const char * arg1,
const QVector4D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
*((const QVector4D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 248, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QMatrix3x2 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi3ELi2EfE setUniformValue(const char *, const QMatrix3x2 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi3ELi2EfE(void *qthis,
const char * arg1,
const QMatrix3x2* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix3x2*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 264, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QVector4D * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK9QVector4Di setUniformValueArray(int, const class QVector4D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK9QVector4Di(void *qthis,
int arg1,
const QVector4D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 199, column 9>
//   // proto:  int QOpenGLShaderProgram::uniformLocation(const char * name);
// _ZNK20QOpenGLShaderProgram15uniformLocationEPKc uniformLocation(const char *)
extern "C"
int
C_ZNK20QOpenGLShaderProgram15uniformLocationEPKc(void *qthis,
const char * arg1) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->uniformLocation(arg1);
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QOpenGLShaderProgram::~QOpenGLShaderProgram();
extern "C"
void C_ZN20QOpenGLShaderProgramD2Ev(void *qthis) {
  delete (QOpenGLShaderProgram*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 138, column 20>
//   // proto:  QVector<float> QOpenGLShaderProgram::defaultInnerTessellationLevels();
// _ZNK20QOpenGLShaderProgram30defaultInnerTessellationLevelsEv defaultInnerTessellationLevels()
extern "C"
QVector<float>*
C_ZNK20QOpenGLShaderProgram30defaultInnerTessellationLevelsEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->defaultInnerTessellationLevels();
  return new QVector<float>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 118, column 18>
//   // proto:  bool QOpenGLShaderProgram::link();
// _ZN20QOpenGLShaderProgram4linkEv link()
extern "C"
bool
C_ZN20QOpenGLShaderProgram4linkEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->link();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 246, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QMatrix2x3 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi2ELi3EfE setUniformValue(const char *, const QMatrix2x3 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi2ELi3EfE(void *qthis,
const char * arg1,
const QMatrix2x3* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix2x3*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 280, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QVector4D * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK9QVector4Di setUniformValueArray(const char *, const class QVector4D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK9QVector4Di(void *qthis,
const char * arg1,
const QVector4D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 109, column 28>
//   // proto:  QList<QOpenGLShader *> QOpenGLShaderProgram::shaders();
// _ZNK20QOpenGLShaderProgram7shadersEv shaders()
extern "C"
QList<QOpenGLShader *>*
C_ZNK20QOpenGLShaderProgram7shadersEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->shaders();
  return new QList<QOpenGLShader *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 158, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(const char * name, GLfloat value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEPKcf setAttributeValue(const char *, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcf(void *qthis,
const char * arg1,
GLfloat arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 153, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(int location, const QVector3D & value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEiRK9QVector3D setAttributeValue(int, const class QVector3D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEiRK9QVector3D(void *qthis,
int arg1,
const QVector3D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
*((const QVector3D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 135, column 20>
//   // proto:  QVector<float> QOpenGLShaderProgram::defaultOuterTessellationLevels();
// _ZNK20QOpenGLShaderProgram30defaultOuterTessellationLevelsEv defaultOuterTessellationLevels()
extern "C"
QVector<float>*
C_ZNK20QOpenGLShaderProgram30defaultOuterTessellationLevelsEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->defaultOuterTessellationLevels();
  return new QVector<float>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 283, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QMatrix2x4 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi2ELi4EfEi setUniformValueArray(const char *, const QMatrix2x4 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi2ELi4EfEi(void *qthis,
const char * arg1,
const QMatrix2x4 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 271, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QMatrix4x2 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi4ELi2EfEi setUniformValueArray(int, const QMatrix4x2 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi4ELi2EfEi(void *qthis,
int arg1,
const QMatrix4x2 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 212, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QColor & color);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK6QColor setUniformValue(int, const class QColor &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK6QColor(void *qthis,
int arg1,
const QColor* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 278, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QVector2D * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK9QVector2Di setUniformValueArray(const char *, const class QVector2D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK9QVector2Di(void *qthis,
const char * arg1,
const QVector2D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 256, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const GLfloat [4][4] value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcPA4_Kf setUniformValue(const char *, const GLfloat (*)[4])
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcPA4_Kf(void *qthis,
const char * arg1,
const GLfloat arg2[4][4]) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 159, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(const char * name, GLfloat x, GLfloat y);
// _ZN20QOpenGLShaderProgram17setAttributeValueEPKcff setAttributeValue(const char *, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcff(void *qthis,
const char * arg1,
GLfloat arg2,
GLfloat arg3) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 245, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QMatrix2x2 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi2ELi2EfE setUniformValue(const char *, const QMatrix2x2 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi2ELi2EfE(void *qthis,
const char * arg1,
const QMatrix2x2* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix2x2*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 260, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const GLint * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPKii setUniformValueArray(int, const GLint *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPKii(void *qthis,
int arg1,
const GLint * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 120, column 13>
//   // proto:  QString QOpenGLShaderProgram::log();
// _ZNK20QOpenGLShaderProgram3logEv log()
extern "C"
QString*
C_ZNK20QOpenGLShaderProgram3logEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->log();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 243, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QSize & size);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK5QSize setUniformValue(const char *, const class QSize &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK5QSize(void *qthis,
const char * arg1,
const QSize* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QSize*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 132, column 9>
//   // proto:  int QOpenGLShaderProgram::patchVertexCount();
// _ZNK20QOpenGLShaderProgram16patchVertexCountEv patchVertexCount()
extern "C"
int
C_ZNK20QOpenGLShaderProgram16patchVertexCountEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->patchVertexCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 251, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QMatrix4x2 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi4ELi2EfE setUniformValue(const char *, const QMatrix4x2 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi4ELi2EfE(void *qthis,
const char * arg1,
const QMatrix4x2* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix4x2*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 226, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const GLfloat [2][2] value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiPA2_Kf setUniformValue(int, const GLfloat (*)[2])
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiPA2_Kf(void *qthis,
int arg1,
const GLfloat arg2[2][2]) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 253, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QMatrix4x4 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK10QMatrix4x4 setUniformValue(const char *, const class QMatrix4x4 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK10QMatrix4x4(void *qthis,
const char * arg1,
const QMatrix4x4* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix4x4*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 288, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QMatrix4x3 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi4ELi3EfEi setUniformValueArray(const char *, const QMatrix4x3 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi4ELi3EfEi(void *qthis,
const char * arg1,
const QMatrix4x3 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 154, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(int location, const QVector4D & value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEiRK9QVector4D setAttributeValue(int, const class QVector4D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEiRK9QVector4D(void *qthis,
int arg1,
const QVector4D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
*((const QVector4D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 284, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QMatrix3x2 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi3ELi2EfEi setUniformValueArray(const char *, const QMatrix3x2 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi3ELi2EfEi(void *qthis,
const char * arg1,
const QMatrix3x2 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 125, column 10>
//   // proto:  bool QOpenGLShaderProgram::create();
// _ZN20QOpenGLShaderProgram6createEv create()
extern "C"
bool
C_ZN20QOpenGLShaderProgram6createEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->create();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 281, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(const char * name, const QMatrix2x2 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi2ELi2EfEi setUniformValueArray(const char *, const QMatrix2x2 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi2ELi2EfEi(void *qthis,
const char * arg1,
const QMatrix2x2 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 216, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QSizeF & size);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK6QSizeF setUniformValue(int, const class QSizeF &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK6QSizeF(void *qthis,
int arg1,
const QSizeF* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QSizeF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 108, column 10>
//   // proto:  void QOpenGLShaderProgram::removeShader(QOpenGLShader * shader);
// _ZN20QOpenGLShaderProgram12removeShaderEP13QOpenGLShader removeShader(class QOpenGLShader *)
extern "C"
void
C_ZN20QOpenGLShaderProgram12removeShaderEP13QOpenGLShader(void *qthis,
QOpenGLShader * arg1) {
  ((QOpenGLShaderProgram*)qthis)->removeShader(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 113, column 10>
//   // proto:  bool QOpenGLShaderProgram::addShaderFromSourceCode(QOpenGLShader::ShaderType type, const QString & source);
// _ZN20QOpenGLShaderProgram23addShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK7QString addShaderFromSourceCode(class QOpenGLShader::ShaderType, const class QString &)
extern "C"
bool
C_ZN20QOpenGLShaderProgram23addShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK7QString(void *qthis,
QOpenGLShader::ShaderType* arg1,
const QString* arg2) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->addShaderFromSourceCode(*((QOpenGLShader::ShaderType*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 250, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QMatrix3x4 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi3ELi4EfE setUniformValue(const char *, const QMatrix3x4 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi3ELi4EfE(void *qthis,
const char * arg1,
const QMatrix3x4* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix3x4*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 239, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QVector4D & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK9QVector4D setUniformValue(const char *, const class QVector4D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK9QVector4D(void *qthis,
const char * arg1,
const QVector4D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QVector4D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 234, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, GLfloat x, GLfloat y);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcff setUniformValue(const char *, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcff(void *qthis,
const char * arg1,
GLfloat arg2,
GLfloat arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 222, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QMatrix3x4 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi3ELi4EfE setUniformValue(int, const QMatrix3x4 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi3ELi4EfE(void *qthis,
int arg1,
const QMatrix3x4* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix3x4*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 191, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeBuffer(const char * name, GLenum type, int offset, int tupleSize, int stride);
// _ZN20QOpenGLShaderProgram18setAttributeBufferEPKcjiii setAttributeBuffer(const char *, GLenum, int, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram18setAttributeBufferEPKcjiii(void *qthis,
const char * arg1,
GLenum arg2,
int arg3,
int arg4,
int arg5) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeBuffer(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 156, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(int location, const GLfloat * values, int columns, int rows);
// _ZN20QOpenGLShaderProgram17setAttributeValueEiPKfii setAttributeValue(int, const GLfloat *, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEiPKfii(void *qthis,
int arg1,
const GLfloat * arg2,
int arg3,
int arg4) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 197, column 10>
//   // proto:  void QOpenGLShaderProgram::disableAttributeArray(const char * name);
// _ZN20QOpenGLShaderProgram21disableAttributeArrayEPKc disableAttributeArray(const char *)
extern "C"
void
C_ZN20QOpenGLShaderProgram21disableAttributeArrayEPKc(void *qthis,
const char * arg1) {
  ((QOpenGLShaderProgram*)qthis)->disableAttributeArray(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 214, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QPointF & point);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK7QPointF setUniformValue(int, const class QPointF &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK7QPointF(void *qthis,
int arg1,
const QPointF* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QPointF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 265, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QMatrix2x2 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi2ELi2EfEi setUniformValueArray(int, const QMatrix2x2 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi2ELi2EfEi(void *qthis,
int arg1,
const QMatrix2x2 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 223, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QMatrix4x2 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi4ELi2EfE setUniformValue(int, const QMatrix4x2 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi4ELi2EfE(void *qthis,
int arg1,
const QMatrix4x2* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix4x2*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 228, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const GLfloat [4][4] value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiPA4_Kf setUniformValue(int, const GLfloat (*)[4])
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiPA4_Kf(void *qthis,
int arg1,
const GLfloat arg2[4][4]) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 148, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(int location, GLfloat value);
// _ZN20QOpenGLShaderProgram17setAttributeValueEif setAttributeValue(int, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEif(void *qthis,
int arg1,
GLfloat arg2) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 221, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QMatrix3x3 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi3ELi3EfE setUniformValue(int, const QMatrix3x3 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi3ELi3EfE(void *qthis,
int arg1,
const QMatrix3x3* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix3x3*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 142, column 10>
//   // proto:  void QOpenGLShaderProgram::bindAttributeLocation(const QString & name, int location);
// _ZN20QOpenGLShaderProgram21bindAttributeLocationERK7QStringi bindAttributeLocation(const class QString &, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram21bindAttributeLocationERK7QStringi(void *qthis,
const QString* arg1,
int arg2) {
  ((QOpenGLShaderProgram*)qthis)->bindAttributeLocation(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 172, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(int location, const QVector3D * values, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEiPK9QVector3Di setAttributeArray(int, const class QVector3D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEiPK9QVector3Di(void *qthis,
int arg1,
const QVector3D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 240, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QColor & color);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK6QColor setUniformValue(const char *, const class QColor &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK6QColor(void *qthis,
const char * arg1,
const QColor* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 257, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QTransform & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK10QTransform setUniformValue(const char *, const class QTransform &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK10QTransform(void *qthis,
const char * arg1,
const QTransform* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QTransform*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 210, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QVector3D & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK9QVector3D setUniformValue(int, const class QVector3D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK9QVector3D(void *qthis,
int arg1,
const QVector3D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QVector3D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 262, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QVector2D * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK9QVector2Di setUniformValueArray(int, const class QVector2D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK9QVector2Di(void *qthis,
int arg1,
const QVector2D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 145, column 9>
//   // proto:  int QOpenGLShaderProgram::attributeLocation(const QByteArray & name);
// _ZNK20QOpenGLShaderProgram17attributeLocationERK10QByteArray attributeLocation(const class QByteArray &)
extern "C"
int
C_ZNK20QOpenGLShaderProgram17attributeLocationERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->attributeLocation(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 235, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, GLfloat x, GLfloat y, GLfloat z);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcfff setUniformValue(const char *, GLfloat, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcfff(void *qthis,
const char * arg1,
GLfloat arg2,
GLfloat arg3,
GLfloat arg4) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 174, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(int location, const QVector4D * values, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEiPK9QVector4Di setAttributeArray(int, const class QVector4D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEiPK9QVector4Di(void *qthis,
int arg1,
const QVector4D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 160, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeValue(const char * name, GLfloat x, GLfloat y, GLfloat z);
// _ZN20QOpenGLShaderProgram17setAttributeValueEPKcfff setAttributeValue(const char *, GLfloat, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcfff(void *qthis,
const char * arg1,
GLfloat arg2,
GLfloat arg3,
GLfloat arg4) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeValue(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 227, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const GLfloat [3][3] value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiPA3_Kf setUniformValue(int, const GLfloat (*)[3])
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiPA3_Kf(void *qthis,
int arg1,
const GLfloat arg2[3][3]) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 186, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(const char * name, GLenum type, const void * values, int tupleSize, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEPKcjPKvii setAttributeArray(const char *, GLenum, const void *, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcjPKvii(void *qthis,
const char * arg1,
GLenum arg2,
const void * arg3,
int arg4,
int arg5) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 233, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, GLuint value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcj setUniformValue(const char *, GLuint)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcj(void *qthis,
const char * arg1,
GLuint arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 232, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, GLint value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKci setUniformValue(const char *, GLint)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKci(void *qthis,
const char * arg1,
GLint arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 104, column 14>
//   // proto:  void QOpenGLShaderProgram::QOpenGLShaderProgram(QObject * parent);
extern "C"
QOpenGLShaderProgram*
C_ZN20QOpenGLShaderProgramC2EP7QObject(QObject * arg1) {
  auto ret = new QOpenGLShaderProgram(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 224, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QMatrix4x3 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi4ELi3EfE setUniformValue(int, const QMatrix4x3 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi4ELi3EfE(void *qthis,
int arg1,
const QMatrix4x3* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix4x3*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 231, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, GLfloat value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcf setUniformValue(const char *, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcf(void *qthis,
const char * arg1,
GLfloat arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 195, column 10>
//   // proto:  void QOpenGLShaderProgram::enableAttributeArray(const char * name);
// _ZN20QOpenGLShaderProgram20enableAttributeArrayEPKc enableAttributeArray(const char *)
extern "C"
void
C_ZN20QOpenGLShaderProgram20enableAttributeArrayEPKc(void *qthis,
const char * arg1) {
  ((QOpenGLShaderProgram*)qthis)->enableAttributeArray(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 225, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QMatrix4x4 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK10QMatrix4x4 setUniformValue(int, const class QMatrix4x4 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK10QMatrix4x4(void *qthis,
int arg1,
const QMatrix4x4* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix4x4*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 211, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QVector4D & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK9QVector4D setUniformValue(int, const class QVector4D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK9QVector4D(void *qthis,
int arg1,
const QVector4D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QVector4D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 168, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(int location, const GLfloat * values, int tupleSize, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEiPKfii setAttributeArray(int, const GLfloat *, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEiPKfii(void *qthis,
int arg1,
const GLfloat * arg2,
int arg3,
int arg4) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 244, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QSizeF & size);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK6QSizeF setUniformValue(const char *, const class QSizeF &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK6QSizeF(void *qthis,
const char * arg1,
const QSizeF* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QSizeF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 208, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
// _ZN20QOpenGLShaderProgram15setUniformValueEiffff setUniformValue(int, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiffff(void *qthis,
int arg1,
GLfloat arg2,
GLfloat arg3,
GLfloat arg4,
GLfloat arg5) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 272, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QMatrix4x3 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi4ELi3EfEi setUniformValueArray(int, const QMatrix4x3 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi4ELi3EfEi(void *qthis,
int arg1,
const QMatrix4x3 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 116, column 10>
//   // proto:  void QOpenGLShaderProgram::removeAllShaders();
// _ZN20QOpenGLShaderProgram16removeAllShadersEv removeAllShaders()
extern "C"
void
C_ZN20QOpenGLShaderProgram16removeAllShadersEv(void *qthis) {
  ((QOpenGLShaderProgram*)qthis)->removeAllShaders();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 129, column 9>
//   // proto:  int QOpenGLShaderProgram::maxGeometryOutputVertices();
// _ZNK20QOpenGLShaderProgram25maxGeometryOutputVerticesEv maxGeometryOutputVertices()
extern "C"
int
C_ZNK20QOpenGLShaderProgram25maxGeometryOutputVerticesEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->maxGeometryOutputVertices();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 182, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(const char * name, const QVector3D * values, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPK9QVector3Di setAttributeArray(const char *, const class QVector3D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPK9QVector3Di(void *qthis,
const char * arg1,
const QVector3D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 219, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(int location, const QMatrix2x4 & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi2ELi4EfE setUniformValue(int, const QMatrix2x4 &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi2ELi4EfE(void *qthis,
int arg1,
const QMatrix2x4* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QMatrix2x4*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 123, column 10>
//   // proto:  void QOpenGLShaderProgram::release();
// _ZN20QOpenGLShaderProgram7releaseEv release()
extern "C"
void
C_ZN20QOpenGLShaderProgram7releaseEv(void *qthis) {
  ((QOpenGLShaderProgram*)qthis)->release();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 102, column 5>
//   // proto:  const QMetaObject * QOpenGLShaderProgram::metaObject();
// _ZNK20QOpenGLShaderProgram10metaObjectEv metaObject()
extern "C"
void*
C_ZNK20QOpenGLShaderProgram10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 200, column 9>
//   // proto:  int QOpenGLShaderProgram::uniformLocation(const QByteArray & name);
// _ZNK20QOpenGLShaderProgram15uniformLocationERK10QByteArray uniformLocation(const class QByteArray &)
extern "C"
int
C_ZNK20QOpenGLShaderProgram15uniformLocationERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QOpenGLShaderProgram*)qthis)->uniformLocation(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 237, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValue(const char * name, const QVector2D & value);
// _ZN20QOpenGLShaderProgram15setUniformValueEPKcRK9QVector2D setUniformValue(const char *, const class QVector2D &)
extern "C"
void
C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK9QVector2D(void *qthis,
const char * arg1,
const QVector2D* arg2) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValue(arg1,
*((const QVector2D*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 269, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const QMatrix3x3 * values, int count);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi3ELi3EfEi setUniformValueArray(int, const QMatrix3x3 *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi3ELi3EfEi(void *qthis,
int arg1,
const QMatrix3x3 * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 180, column 10>
//   // proto:  void QOpenGLShaderProgram::setAttributeArray(const char * name, const QVector2D * values, int stride);
// _ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPK9QVector2Di setAttributeArray(const char *, const class QVector2D *, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPK9QVector2Di(void *qthis,
const char * arg1,
const QVector2D * arg2,
int arg3) {
  ((QOpenGLShaderProgram*)qthis)->setAttributeArray(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglshaderprogram.h', line 259, column 10>
//   // proto:  void QOpenGLShaderProgram::setUniformValueArray(int location, const GLfloat * values, int count, int tupleSize);
// _ZN20QOpenGLShaderProgram20setUniformValueArrayEiPKfii setUniformValueArray(int, const GLfloat *, int, int)
extern "C"
void
C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPKfii(void *qthis,
int arg1,
const GLfloat * arg2,
int arg3,
int arg4) {
  ((QOpenGLShaderProgram*)qthis)->setUniformValueArray(arg1,
arg2,
arg3,
arg4);
}
// <= ext block end

// body block begin =>
// QOpenGLShader_SlotProxy here
class QOpenGLShader_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLShader_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QOpenGLShader_SlotProxy* QOpenGLShader_SlotProxy_new()
  {
    return new QOpenGLShader_SlotProxy();
  }
};

// QOpenGLShaderProgram_SlotProxy here
class QOpenGLShaderProgram_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLShaderProgram_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qopenglshaderprogram.moc"

extern "C" {
  QOpenGLShaderProgram_SlotProxy* QOpenGLShaderProgram_SlotProxy_new()
  {
    return new QOpenGLShaderProgram_SlotProxy();
  }
};

// <= body block end

