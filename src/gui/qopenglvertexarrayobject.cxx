// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtGui/qopenglvertexarrayobject.h
// dst-file: /src/gui/qopenglvertexarrayobject.cxx
//

// header block begin =>
#include <qopenglvertexarrayobject.h>

extern "C" {

int QOpenGLVertexArrayObject_Class_Size()
{
  return sizeof(QOpenGLVertexArrayObject);
}

// QOpenGLVertexArrayObject(class QObject *)
QOpenGLVertexArrayObject* dector_ZN24QOpenGLVertexArrayObjectC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QOpenGLVertexArrayObject) == 32, "tyszerr");
  QOpenGLVertexArrayObject* rthis = new QOpenGLVertexArrayObject(parent);
  return rthis;
}

// ~QOpenGLVertexArrayObject()
void dedtor_ZN24QOpenGLVertexArrayObjectD0Ev(QOpenGLVertexArrayObject* that)
{
  QOpenGLVertexArrayObject* rthis = (QOpenGLVertexArrayObject*)that;
  delete rthis;
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
// QOpenGLVertexArrayObject_SlotProxy here
class QOpenGLVertexArrayObject_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLVertexArrayObject_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qopenglvertexarrayobject.moc"

extern "C" {
  QOpenGLVertexArrayObject_SlotProxy* QOpenGLVertexArrayObject_SlotProxy_new()
  {
    return new QOpenGLVertexArrayObject_SlotProxy();
  }
};

// <= body block end

