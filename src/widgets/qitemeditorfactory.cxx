//  header block begin
// /usr/include/qt/QtWidgets/qitemeditorfactory.h
#include <qitemeditorfactory.h>
#include <QtWidgets>

// QItemEditorFactory is pure virtual: false
//  header block end

//  main block begin

class MyQItemEditorFactory : public QItemEditorFactory {
public:
MyQItemEditorFactory() : QItemEditorFactory() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:98
// [-2] void QItemEditorFactory()
extern "C"
void* C_ZN18QItemEditorFactoryC1Ev() {
  (MyQItemEditorFactory*)(0);
  return  new MyQItemEditorFactory();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:99
// [-2] void ~QItemEditorFactory()
extern "C"
void C_ZN18QItemEditorFactoryD1Ev(void *this_) {
  delete (QItemEditorFactory*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:101
// [8] QWidget * createEditor(int, class QWidget *)
extern "C"
void* C_ZNK18QItemEditorFactory12createEditorEiP7QWidget(void *this_, int userType, QWidget * parent) {
  return (void*)((QItemEditorFactory*)this_)->createEditor(userType, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:102
// [8] QByteArray valuePropertyName(int)
extern "C"
void* C_ZNK18QItemEditorFactory17valuePropertyNameEi(void *this_, int userType) {
  auto rv = ((QItemEditorFactory*)this_)->valuePropertyName(userType);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:104
// [-2] void registerEditor(int, class QItemEditorCreatorBase *)
extern "C"
void C_ZN18QItemEditorFactory14registerEditorEiP22QItemEditorCreatorBase(void *this_, int userType, QItemEditorCreatorBase * creator) {
  ((QItemEditorFactory*)this_)->registerEditor(userType, creator);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:106
// [8] const QItemEditorFactory * defaultFactory()
extern "C"
void* C_ZN18QItemEditorFactory14defaultFactoryEv() {
  return (void*)QItemEditorFactory::defaultFactory();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:107
// [-2] void setDefaultFactory(class QItemEditorFactory *)
extern "C"
void C_ZN18QItemEditorFactory17setDefaultFactoryEPS_(QItemEditorFactory * factory) {
  QItemEditorFactory::setDefaultFactory(factory);
}
//  main block end
