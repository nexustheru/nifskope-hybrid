/****************************************************************************
** Meta object code from reading C++ file 'nifskope.h'
**
** Created: Wed Aug 21 01:46:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../nifskope.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nifskope.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ui_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   46,   14,   14, 0x0a,
      70,   14,   14,   14, 0x0a,
      95,   84,   14,   14, 0x0a,
     117,   84,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Ui_MainWindow[] = {
    "Ui_MainWindow\0\0newValue\0valueChanged(QString)\0"
    "value\0setValue(QString)\0importscene()\0"
    "MainWindow\0setupUi(QMainWindow*)\0"
    "retranslateUi(QMainWindow*)\0"
};

void Ui_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Ui_MainWindow *_t = static_cast<Ui_MainWindow *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->importscene(); break;
        case 3: _t->setupUi((*reinterpret_cast< QMainWindow*(*)>(_a[1]))); break;
        case 4: _t->retranslateUi((*reinterpret_cast< QMainWindow*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Ui_MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Ui_MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Ui_MainWindow,
      qt_meta_data_Ui_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ui_MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ui_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ui_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ui_MainWindow))
        return static_cast<void*>(const_cast< Ui_MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Ui_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Ui_MainWindow::valueChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
