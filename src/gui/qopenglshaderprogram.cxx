// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtGui/qopenglshaderprogram.h
// dst-file: /src/gui/qopenglshaderprogram.cxx
//

// header block begin =>
#include <qopenglshaderprogram.h>

extern "C" {

int QOpenGLShader_Class_Size()
{
  return sizeof(QOpenGLShader);
}

// ~QOpenGLShader()
void dedtor_ZN13QOpenGLShaderD0Ev(QOpenGLShader* that)
{
  QOpenGLShader* rthis = (QOpenGLShader*)that;
  delete rthis;
}

// QOpenGLShader(class QOpenGLShader::ShaderType, class QObject *)
QOpenGLShader* dector_ZN13QOpenGLShaderC1E6QFlagsINS_13ShaderTypeBitEEP7QObject(QOpenGLShader::ShaderType type, QObject * parent)
{
  // static_assert(sizeof(QOpenGLShader) == 32, "tyszerr");
  QOpenGLShader* rthis = new QOpenGLShader(type, parent);
  return rthis;
}

int QOpenGLShaderProgram_Class_Size()
{
  return sizeof(QOpenGLShaderProgram);
}

// ~QOpenGLShaderProgram()
void dedtor_ZN20QOpenGLShaderProgramD0Ev(QOpenGLShaderProgram* that)
{
  QOpenGLShaderProgram* rthis = (QOpenGLShaderProgram*)that;
  delete rthis;
}

// QOpenGLShaderProgram(class QObject *)
QOpenGLShaderProgram* dector_ZN20QOpenGLShaderProgramC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QOpenGLShaderProgram) == 32, "tyszerr");
  QOpenGLShaderProgram* rthis = new QOpenGLShaderProgram(parent);
  return rthis;
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

