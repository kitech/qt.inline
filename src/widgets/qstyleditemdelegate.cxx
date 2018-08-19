//  header block begin
// since 0x040400
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleditemdelegate.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyledItemDelegate is pure virtual: false
// QStyledItemDelegate has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyledItemDelegate : public QStyledItemDelegate {
public:
  virtual ~MyQStyledItemDelegate() {}
// void QStyledItemDelegate(QObject *)
MyQStyledItemDelegate(QObject * parent) : QStyledItemDelegate(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void initStyleOption(QStyleOptionViewItem *, const QModelIndex &)
  virtual void initStyleOption(QStyleOptionViewItem * option, const QModelIndex & index) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 2, (uint64_t)option, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStyledItemDelegate::initStyleOption(option, index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QStyledItemDelegate::eventFilter(object, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool editorEvent(QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &)
  virtual bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"editorEvent", &handled, 4, (uint64_t)event, (uint64_t)model, (uint64_t)&option, (uint64_t)&index, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QStyledItemDelegate::editorEvent(event, model, option, index);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:91
// [-2] void initStyleOption(QStyleOptionViewItem *, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK19QStyledItemDelegate15initStyleOptionEP20QStyleOptionViewItemRK11QModelIndex(void *this_, QStyleOptionViewItem * option, QModelIndex* index) {
  ((QStyledItemDelegate*)this_)->QStyledItemDelegate::initStyleOption(option, *index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:94
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QStyledItemDelegate11eventFilterEP7QObjectP6QEvent(void *this_, QObject * object, QEvent * event) {
  return (bool)((QStyledItemDelegate*)this_)->QStyledItemDelegate::eventFilter(object, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:95
// [1] bool editorEvent(QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QStyledItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QEvent * event, QAbstractItemModel * model, QStyleOptionViewItem* option, QModelIndex* index) {
  return (bool)((QStyledItemDelegate*)this_)->QStyledItemDelegate::editorEvent(event, model, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QStyledItemDelegate10metaObjectEv(void *this_) {
  return (void*)((QStyledItemDelegate*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyledItemDelegate11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QStyledItemDelegate*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QStyledItemDelegate11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QStyledItemDelegate*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyledItemDelegate2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStyledItemDelegate::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyledItemDelegate6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStyledItemDelegate::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:61
// [-2] void QStyledItemDelegate(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyledItemDelegateC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQStyledItemDelegate*)(0);
  return  new MyQStyledItemDelegate(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:62
// [-2] void ~QStyledItemDelegate()
extern "C" Q_DECL_EXPORT
void C_ZN19QStyledItemDelegateD2Ev(void *this_) {
  delete (QStyledItemDelegate*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:65
// [-2] void paint(QPainter *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK19QStyledItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QStyledItemDelegate*)this_)->paint(painter, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:67
// [8] QSize sizeHint(const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QStyledItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *this_, QStyleOptionViewItem* option, QModelIndex* index) {
  auto rv = ((QStyledItemDelegate*)this_)->sizeHint(*option, *index);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:71
// [8] QWidget * createEditor(QWidget *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QStyledItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * parent, QStyleOptionViewItem* option, QModelIndex* index) {
  return (void*)((QStyledItemDelegate*)this_)->createEditor(parent, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:75
// [-2] void setEditorData(QWidget *, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK19QStyledItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, QModelIndex* index) {
  ((QStyledItemDelegate*)this_)->setEditorData(editor, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:76
// [-2] void setModelData(QWidget *, QAbstractItemModel *, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK19QStyledItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *this_, QWidget * editor, QAbstractItemModel * model, QModelIndex* index) {
  ((QStyledItemDelegate*)this_)->setModelData(editor, model, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:80
// [-2] void updateEditorGeometry(QWidget *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK19QStyledItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * editor, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QStyledItemDelegate*)this_)->updateEditorGeometry(editor, *option, *index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:85
// [8] QItemEditorFactory * itemEditorFactory()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QStyledItemDelegate17itemEditorFactoryEv(void *this_) {
  return (void*)((QStyledItemDelegate*)this_)->itemEditorFactory();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:86
// [-2] void setItemEditorFactory(QItemEditorFactory *)
extern "C" Q_DECL_EXPORT
void C_ZN19QStyledItemDelegate20setItemEditorFactoryEP18QItemEditorFactory(void *this_, QItemEditorFactory * factory) {
  ((QStyledItemDelegate*)this_)->setItemEditorFactory(factory);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:88
// [8] QString displayText(const QVariant &, const QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QStyledItemDelegate11displayTextERK8QVariantRK7QLocale(void *this_, QVariant* value, QLocale* locale) {
  auto rv = ((QStyledItemDelegate*)this_)->displayText(*value, *locale);
return new QString(rv);
}

//  main block end
