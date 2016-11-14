// /usr/include/qt/QtWidgets/qcolumnview.h
#include <qcolumnview.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QColumnView10metaObjectEv(void *this_) {
  /*return*/ ((QColumnView*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qcolumnview.h:58
// void updatePreviewWidget(const class QModelIndex &)
extern "C"
void C_ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QColumnView*)this_)->updatePreviewWidget(index);
}
// /usr/include/qt/QtWidgets/qcolumnview.h:61
// void QColumnView(class QWidget *)
extern "C"
void* C_ZN11QColumnViewC1EP7QWidget(QWidget * parent) {
  return new QColumnView(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:62
// void ~QColumnView()
extern "C"
void C_ZN11QColumnViewD1Ev(void *this_) {
  delete (QColumnView*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:65
// QModelIndex indexAt(const class QPoint &)
extern "C"
void C_ZNK11QColumnView7indexAtERK6QPoint(void *this_, const QPoint & point) {
  /*return*/ ((QColumnView*)this_)->indexAt(point);
}
// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:66
// void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN11QColumnView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, const QModelIndex & index, QAbstractItemView::ScrollHint hint) {
  ((QColumnView*)this_)->scrollTo(index, hint);
}
// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:67
// QSize sizeHint()
extern "C"
void C_ZNK11QColumnView8sizeHintEv(void *this_) {
  /*return*/ ((QColumnView*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:68
// QRect visualRect(const class QModelIndex &)
extern "C"
void C_ZNK11QColumnView10visualRectERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QColumnView*)this_)->visualRect(index);
}
// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:69
// void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN11QColumnView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QColumnView*)this_)->setModel(model);
}
// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:70
// void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN11QColumnView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QColumnView*)this_)->setSelectionModel(selectionModel);
}
// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:71
// void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN11QColumnView12setRootIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QColumnView*)this_)->setRootIndex(index);
}
// virtual
// /usr/include/qt/QtWidgets/qcolumnview.h:72
// void selectAll()
extern "C"
void C_ZN11QColumnView9selectAllEv(void *this_) {
  ((QColumnView*)this_)->selectAll();
}
// /usr/include/qt/QtWidgets/qcolumnview.h:75
// void setResizeGripsVisible(_Bool)
extern "C"
void C_ZN11QColumnView21setResizeGripsVisibleEb(void *this_, bool visible) {
  ((QColumnView*)this_)->setResizeGripsVisible(visible);
}
// /usr/include/qt/QtWidgets/qcolumnview.h:76
// bool resizeGripsVisible()
extern "C"
void C_ZNK11QColumnView18resizeGripsVisibleEv(void *this_) {
  /*return*/ ((QColumnView*)this_)->resizeGripsVisible();
}
// /usr/include/qt/QtWidgets/qcolumnview.h:78
// QWidget * previewWidget()
extern "C"
void C_ZNK11QColumnView13previewWidgetEv(void *this_) {
  /*return*/ ((QColumnView*)this_)->previewWidget();
}
// /usr/include/qt/QtWidgets/qcolumnview.h:79
// void setPreviewWidget(class QWidget *)
extern "C"
void C_ZN11QColumnView16setPreviewWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QColumnView*)this_)->setPreviewWidget(widget);
}
// /usr/include/qt/QtWidgets/qcolumnview.h:81
// void setColumnWidths(const QList<int> &)
extern "C"
void C_ZN11QColumnView15setColumnWidthsERK5QListIiE(void *this_, const QList<int> & list) {
  ((QColumnView*)this_)->setColumnWidths(list);
}
// /usr/include/qt/QtWidgets/qcolumnview.h:82
// QList<int> columnWidths()
extern "C"
void C_ZNK11QColumnView12columnWidthsEv(void *this_) {
  /*return*/ ((QColumnView*)this_)->columnWidths();
}