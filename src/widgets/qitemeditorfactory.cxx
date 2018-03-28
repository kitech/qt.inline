//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qitemeditorfactory.h
#ifndef protected
#define protected public
#endif
#include <qitemeditorfactory.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemEditorFactory is pure virtual: false
// QItemEditorFactory has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQItemEditorFactory : public QItemEditorFactory {
public:
  virtual ~MyQItemEditorFactory() {}
// void QItemEditorFactory()
MyQItemEditorFactory() : QItemEditorFactory() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:98
// [-2] void QItemEditorFactory()
extern "C" Q_DECL_EXPORT
void* C_ZN18QItemEditorFactoryC2Ev() {
  return  new QItemEditorFactory();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:99
// [-2] void ~QItemEditorFactory()
extern "C" Q_DECL_EXPORT
void C_ZN18QItemEditorFactoryD2Ev(void *this_) {
  delete (QItemEditorFactory*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:101
// [8] QWidget * createEditor(int, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QItemEditorFactory12createEditorEiP7QWidget(void *this_, int userType, QWidget * parent) {
  return (void*)((QItemEditorFactory*)this_)->createEditor(userType, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:102
// [8] QByteArray valuePropertyName(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QItemEditorFactory17valuePropertyNameEi(void *this_, int userType) {
  auto rv = ((QItemEditorFactory*)this_)->valuePropertyName(userType);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:104
// [-2] void registerEditor(int, QItemEditorCreatorBase *)
extern "C" Q_DECL_EXPORT
void C_ZN18QItemEditorFactory14registerEditorEiP22QItemEditorCreatorBase(void *this_, int userType, QItemEditorCreatorBase * creator) {
  ((QItemEditorFactory*)this_)->registerEditor(userType, creator);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:106
// [8] const QItemEditorFactory * defaultFactory()
extern "C" Q_DECL_EXPORT
void* C_ZN18QItemEditorFactory14defaultFactoryEv() {
  return (void*)QItemEditorFactory::defaultFactory();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:107
// [-2] void setDefaultFactory(QItemEditorFactory *)
extern "C" Q_DECL_EXPORT
void C_ZN18QItemEditorFactory17setDefaultFactoryEPS_(QItemEditorFactory * factory) {
  QItemEditorFactory::setDefaultFactory(factory);
}

//  main block end
