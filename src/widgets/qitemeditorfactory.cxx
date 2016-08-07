// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qitemeditorfactory.h
// dst-file: /src/widgets/qitemeditorfactory.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qitemeditorfactory.h>


#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qitemeditorfactory_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemeditorfactory.h', line 98, column 12>
//   // proto:  void QItemEditorFactory::QItemEditorFactory();
if (true) {
  auto f = []() {
    new QItemEditorFactory();
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QItemEditorCreatorBase_Class_Size()
{
  return sizeof(QItemEditorCreatorBase);
}

extern "C"
int QItemEditorFactory_Class_Size()
{
  return sizeof(QItemEditorFactory);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemeditorfactory.h', line 61, column 24>
//   // proto:  QByteArray QItemEditorCreatorBase::valuePropertyName();
// _ZNK22QItemEditorCreatorBase17valuePropertyNameEv valuePropertyName()
extern "C"
QByteArray*
C_ZNK22QItemEditorCreatorBase17valuePropertyNameEv(void *qthis) {
  auto ret =
  ((QItemEditorCreatorBase*)qthis)->valuePropertyName();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemeditorfactory.h', line 60, column 22>
//   // proto:  QWidget * QItemEditorCreatorBase::createWidget(QWidget * parent);
// _ZNK22QItemEditorCreatorBase12createWidgetEP7QWidget createWidget(class QWidget *)
extern "C"
void*
C_ZNK22QItemEditorCreatorBase12createWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QItemEditorCreatorBase*)qthis)->createWidget(arg1);
  return (void*)ret;
}
//   // proto:  void QItemEditorCreatorBase::~QItemEditorCreatorBase();
extern "C"
void C_ZN22QItemEditorCreatorBaseD2Ev(void *qthis) {
  delete (QItemEditorCreatorBase*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemeditorfactory.h', line 98, column 12>
//   // proto:  void QItemEditorFactory::QItemEditorFactory();
extern "C"
QItemEditorFactory*
C_ZN18QItemEditorFactoryC2Ev() {
  auto ret = new QItemEditorFactory();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemeditorfactory.h', line 102, column 24>
//   // proto:  QByteArray QItemEditorFactory::valuePropertyName(int userType);
// _ZNK18QItemEditorFactory17valuePropertyNameEi valuePropertyName(int)
extern "C"
QByteArray*
C_ZNK18QItemEditorFactory17valuePropertyNameEi(void *qthis,
int arg1) {
  auto ret =
  ((QItemEditorFactory*)qthis)->valuePropertyName(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemeditorfactory.h', line 106, column 38>
//   // proto: static const QItemEditorFactory * QItemEditorFactory::defaultFactory();
// _ZN18QItemEditorFactory14defaultFactoryEv defaultFactory()
extern "C"
void*
C_ZN18QItemEditorFactory14defaultFactoryEv() {
  auto ret =
  QItemEditorFactory::defaultFactory();
  return (void*)ret;
}
//   // proto:  void QItemEditorFactory::~QItemEditorFactory();
extern "C"
void C_ZN18QItemEditorFactoryD2Ev(void *qthis) {
  delete (QItemEditorFactory*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemeditorfactory.h', line 104, column 10>
//   // proto:  void QItemEditorFactory::registerEditor(int userType, QItemEditorCreatorBase * creator);
// _ZN18QItemEditorFactory14registerEditorEiP22QItemEditorCreatorBase registerEditor(int, class QItemEditorCreatorBase *)
extern "C"
void
C_ZN18QItemEditorFactory14registerEditorEiP22QItemEditorCreatorBase(void *qthis,
int arg1,
QItemEditorCreatorBase * arg2) {
  ((QItemEditorFactory*)qthis)->registerEditor(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemeditorfactory.h', line 107, column 17>
//   // proto: static void QItemEditorFactory::setDefaultFactory(QItemEditorFactory * factory);
// _ZN18QItemEditorFactory17setDefaultFactoryEPS_ setDefaultFactory(class QItemEditorFactory *)
extern "C"
void
C_ZN18QItemEditorFactory17setDefaultFactoryEPS_(QItemEditorFactory * arg1) {
  QItemEditorFactory::setDefaultFactory(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemeditorfactory.h', line 101, column 22>
//   // proto:  QWidget * QItemEditorFactory::createEditor(int userType, QWidget * parent);
// _ZNK18QItemEditorFactory12createEditorEiP7QWidget createEditor(int, class QWidget *)
extern "C"
void*
C_ZNK18QItemEditorFactory12createEditorEiP7QWidget(void *qthis,
int arg1,
QWidget * arg2) {
  auto ret =
  ((QItemEditorFactory*)qthis)->createEditor(arg1,
arg2);
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// <= body block end

