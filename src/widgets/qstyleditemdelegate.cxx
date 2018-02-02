//  header block begin
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h
#include <qstyleditemdelegate.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyledItemDelegate is pure virtual: false
// QStyledItemDelegate has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZNK19QStyledItemDelegate15initStyleOptionEP20QStyleOptionViewItemRK11QModelIndex_fnptr = 0;
// extern "C" void set_callback_ZNK19QStyledItemDelegate15initStyleOptionEP20QStyleOptionViewItemRK11QModelIndex(void*cbfn)
// { callback_ZNK19QStyledItemDelegate15initStyleOptionEP20QStyleOptionViewItemRK11QModelIndex_fnptr = cbfn; }
// void* callback_ZN19QStyledItemDelegate11eventFilterEP7QObjectP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN19QStyledItemDelegate11eventFilterEP7QObjectP6QEvent(void*cbfn)
// { callback_ZN19QStyledItemDelegate11eventFilterEP7QObjectP6QEvent_fnptr = cbfn; }
// void* callback_ZN19QStyledItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex_fnptr = 0;
// extern "C" void set_callback_ZN19QStyledItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex(void*cbfn)
// { callback_ZN19QStyledItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex_fnptr = cbfn; }

class MyQStyledItemDelegate : public QStyledItemDelegate {
public:
  virtual ~MyQStyledItemDelegate() {}
// void QStyledItemDelegate(class QObject *)
MyQStyledItemDelegate(QObject * parent) : QStyledItemDelegate(parent) {}
// void initStyleOption(class QStyleOptionViewItem *, const class QModelIndex &)
  virtual void initStyleOption(QStyleOptionViewItem * option, const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 2, (uint64_t)option, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QStyleOptionViewItem *, QModelIndex*))(callback_ZNK19QStyledItemDelegate15initStyleOptionEP20QStyleOptionViewItemRK11QModelIndex_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , option, (QModelIndex*)&index);
    // }
    QStyledItemDelegate::initStyleOption(option, index);
  }
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QObject *, QEvent *))(callback_ZN19QStyledItemDelegate11eventFilterEP7QObjectP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , object, event);
    // }
    return QStyledItemDelegate::eventFilter(object, event);
  }
  }
// bool editorEvent(class QEvent *, class QAbstractItemModel *, const class QStyleOptionViewItem &, const class QModelIndex &)
  virtual bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"editorEvent", &handled, 4, (uint64_t)event, (uint64_t)model, (uint64_t)&option, (uint64_t)&index, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QEvent *, QAbstractItemModel *, QStyleOptionViewItem*, QModelIndex*))(callback_ZN19QStyledItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , event, model, (QStyleOptionViewItem*)&option, (QModelIndex*)&index);
    // }
    return QStyledItemDelegate::editorEvent(event, model, option, index);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK19QStyledItemDelegate10metaObjectEv(void *this_) {
  return (void*)((QStyledItemDelegate*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:61
// [-2] void QStyledItemDelegate(class QObject *)
extern "C"
void* C_ZN19QStyledItemDelegateC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQStyledItemDelegate*)(0);
  return  new MyQStyledItemDelegate(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:62
// [-2] void ~QStyledItemDelegate()
extern "C"
void C_ZN19QStyledItemDelegateD2Ev(void *this_) {
  delete (QStyledItemDelegate*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:65
// [-2] void paint(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QStyledItemDelegate*)this_)->paint(painter, *option, *index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:67
// [8] QSize sizeHint(const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void* C_ZNK19QStyledItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *this_, QStyleOptionViewItem* option, QModelIndex* index) {
  auto rv = ((QStyledItemDelegate*)this_)->sizeHint(*option, *index);
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:71
// [8] QWidget * createEditor(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void* C_ZNK19QStyledItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * parent, QStyleOptionViewItem* option, QModelIndex* index) {
  return (void*)((QStyledItemDelegate*)this_)->createEditor(parent, *option, *index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:75
// [-2] void setEditorData(class QWidget *, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, QModelIndex* index) {
  ((QStyledItemDelegate*)this_)->setEditorData(editor, *index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:76
// [-2] void setModelData(class QWidget *, class QAbstractItemModel *, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *this_, QWidget * editor, QAbstractItemModel * model, QModelIndex* index) {
  ((QStyledItemDelegate*)this_)->setModelData(editor, model, *index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:80
// [-2] void updateEditorGeometry(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * editor, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QStyledItemDelegate*)this_)->updateEditorGeometry(editor, *option, *index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:85
// [8] QItemEditorFactory * itemEditorFactory()
extern "C"
void* C_ZNK19QStyledItemDelegate17itemEditorFactoryEv(void *this_) {
  return (void*)((QStyledItemDelegate*)this_)->itemEditorFactory();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:86
// [-2] void setItemEditorFactory(class QItemEditorFactory *)
extern "C"
void C_ZN19QStyledItemDelegate20setItemEditorFactoryEP18QItemEditorFactory(void *this_, QItemEditorFactory * factory) {
  ((QStyledItemDelegate*)this_)->setItemEditorFactory(factory);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:88
// [8] QString displayText(const class QVariant &, const class QLocale &)
extern "C"
void* C_ZNK19QStyledItemDelegate11displayTextERK8QVariantRK7QLocale(void *this_, QVariant* value, QLocale* locale) {
  auto rv = ((QStyledItemDelegate*)this_)->displayText(*value, *locale);
return new QString(rv);
}
//  main block end
