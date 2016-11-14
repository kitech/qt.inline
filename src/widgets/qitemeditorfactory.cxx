// /usr/include/qt/QtWidgets/qitemeditorfactory.h
#include <qitemeditorfactory.h>
#include <QtWidgets>

// inline
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:98
// void QItemEditorFactory()
extern "C"
void* C_ZN18QItemEditorFactoryC1Ev() {
  return new QItemEditorFactory();
}
// virtual
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:99
// void ~QItemEditorFactory()
extern "C"
void C_ZN18QItemEditorFactoryD1Ev(void *this_) {
  delete (QItemEditorFactory*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:101
// QWidget * createEditor(int, class QWidget *)
extern "C"
void C_ZNK18QItemEditorFactory12createEditorEiP7QWidget(void *this_, int userType, QWidget * parent) {
  /*return*/ ((QItemEditorFactory*)this_)->createEditor(userType, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:102
// QByteArray valuePropertyName(int)
extern "C"
void C_ZNK18QItemEditorFactory17valuePropertyNameEi(void *this_, int userType) {
  /*return*/ ((QItemEditorFactory*)this_)->valuePropertyName(userType);
}
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:104
// void registerEditor(int, class QItemEditorCreatorBase *)
extern "C"
void C_ZN18QItemEditorFactory14registerEditorEiP22QItemEditorCreatorBase(void *this_, int userType, QItemEditorCreatorBase * creator) {
  ((QItemEditorFactory*)this_)->registerEditor(userType, creator);
}
// static
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:106
// const QItemEditorFactory * defaultFactory()
extern "C"
void C_ZN18QItemEditorFactory14defaultFactoryEv() {
  /*return*/ QItemEditorFactory::defaultFactory();
}
// static
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:107
// void setDefaultFactory(class QItemEditorFactory *)
extern "C"
void C_ZN18QItemEditorFactory17setDefaultFactoryEPS_(QItemEditorFactory * factory) {
  QItemEditorFactory::setDefaultFactory(factory);
}