//  header block begin
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemdelegate.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractItemDelegate is pure virtual: true
// QAbstractItemDelegate has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractItemDelegate : public QAbstractItemDelegate {
public:
  virtual ~MyQAbstractItemDelegate() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void paint(QPainter *, const QStyleOptionViewItem &, const QModelIndex &)
  virtual void paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paint", &handled, 3, (uint64_t)painter, (uint64_t)&option, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractItemDelegate::paint(painter, option, index);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QSize sizeHint(const QStyleOptionViewItem &, const QModelIndex &)
  virtual QSize sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 2, (uint64_t)&option, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// void QAbstractItemDelegate(QObject *)
MyQAbstractItemDelegate(QObject * parent) : QAbstractItemDelegate(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:76
// [-2] void paint(QPainter *, const QStyleOptionViewItem &, const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:80
// [8] QSize sizeHint(const QStyleOptionViewItem &, const QModelIndex &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractItemDelegate10metaObjectEv(void *this_) {
  return (void*)((QAbstractItemDelegate*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:60
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractItemDelegate11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractItemDelegate*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:60
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QAbstractItemDelegate11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractItemDelegate*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:60
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractItemDelegate2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractItemDelegate::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:60
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractItemDelegate6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractItemDelegate::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:72
// [-2] void QAbstractItemDelegate(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractItemDelegateC2EP7QObject(QObject * parent) {
  return 0; // new QAbstractItemDelegate(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:73
// [-2] void ~QAbstractItemDelegate()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractItemDelegateD2Ev(void *this_) {
  delete (QAbstractItemDelegate*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:76
// [-2] void paint(QPainter *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK21QAbstractItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->paint(painter, *option, *index);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:80
// [8] QSize sizeHint(const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *this_, QStyleOptionViewItem* option, QModelIndex* index) {
  auto rv = ((QAbstractItemDelegate*)this_)->sizeHint(*option, *index);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:84
// [8] QWidget * createEditor(QWidget *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * parent, QStyleOptionViewItem* option, QModelIndex* index) {
  return (void*)((QAbstractItemDelegate*)this_)->createEditor(parent, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:88
// [-2] void destroyEditor(QWidget *, const QModelIndex &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZNK21QAbstractItemDelegate13destroyEditorEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->destroyEditor(editor, *index);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:90
// [-2] void setEditorData(QWidget *, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK21QAbstractItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->setEditorData(editor, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:92
// [-2] void setModelData(QWidget *, QAbstractItemModel *, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK21QAbstractItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *this_, QWidget * editor, QAbstractItemModel * model, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->setModelData(editor, model, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:96
// [-2] void updateEditorGeometry(QWidget *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK21QAbstractItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * editor, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->updateEditorGeometry(editor, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:101
// [1] bool editorEvent(QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QAbstractItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QEvent * event, QAbstractItemModel * model, QStyleOptionViewItem* option, QModelIndex* index) {
  return (bool)((QAbstractItemDelegate*)this_)->editorEvent(event, model, *option, *index);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:106
// [8] QString elidedText(const QFontMetrics &, int, Qt::TextElideMode, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractItemDelegate10elidedTextERK12QFontMetricsiN2Qt13TextElideModeERK7QString(QFontMetrics* fontMetrics, int width, Qt::TextElideMode mode, QString* text) {
  auto rv = QAbstractItemDelegate::elidedText(*fontMetrics, width, mode, *text);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:109
// [1] bool helpEvent(QHelpEvent *, QAbstractItemView *, const QStyleOptionViewItem &, const QModelIndex &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZN21QAbstractItemDelegate9helpEventEP10QHelpEventP17QAbstractItemViewRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QHelpEvent * event, QAbstractItemView * view, QStyleOptionViewItem* option, QModelIndex* index) {
  return (bool)((QAbstractItemDelegate*)this_)->helpEvent(event, view, *option, *index);
}
#endif // QT_VERSION >= 0x040300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:114
// [8] QVector<int> paintingRoles()
extern "C" Q_DECL_EXPORT
void C_ZNK21QAbstractItemDelegate13paintingRolesEv(void *this_) {
  auto rv = ((QAbstractItemDelegate*)this_)->paintingRoles();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:117
// [-2] void commitData(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractItemDelegate10commitDataEP7QWidget(void *this_, QWidget * editor) {
  ((QAbstractItemDelegate*)this_)->commitData(editor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:118
// [-2] void closeEditor(QWidget *, QAbstractItemDelegate::EndEditHint)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(void *this_, QWidget * editor, QAbstractItemDelegate::EndEditHint hint) {
  ((QAbstractItemDelegate*)this_)->closeEditor(editor, hint);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:119
// [-2] void sizeHintChanged(const QModelIndex &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(void *this_, QModelIndex* arg0) {
  ((QAbstractItemDelegate*)this_)->sizeHintChanged(*arg0);
}
#endif // QT_VERSION >= 0x040400

//  main block end
