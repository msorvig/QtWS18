#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,1,0,0,0,1,0,0,0,
8,0,2,0,0,0,2,0,0,0,2,0,0,0,42,0,
2,0,0,0,46,0,0,0,4,0,0,0,20,0,0,0,
0,0,1,0,0,0,0,0,0,4,46,0,0,0,0,0,
1,0,0,0,0,0,0,6,246,0,2,0,0,0,3,0,
0,0,55,0,0,3,32,0,0,0,0,0,1,0,0,0,
0,0,0,2,220,0,0,0,0,0,1,0,0,0,0,0,
0,3,114,0,0,0,0,0,1,0,0,0,0,0,0,6,
46,0,0,0,0,0,1,0,0,0,0,0,0,3,204,0,
0,0,0,0,1,0,0,0,0,0,0,4,230,0,0,0,
0,0,1,0,0,0,0,0,0,2,12,0,0,0,0,0,
1,0,0,0,0,0,0,3,150,0,0,0,0,0,1,0,
0,0,0,0,0,1,152,0,0,0,0,0,1,0,0,0,
0,0,0,5,120,0,0,0,0,0,1,0,0,0,0,0,
0,0,130,0,0,0,0,0,1,0,0,0,0,0,0,1,
4,0,0,0,0,0,1,0,0,0,0,0,0,4,12,0,
0,0,0,0,1,0,0,0,0,0,0,4,150,0,0,0,
0,0,1,0,0,0,0,0,0,6,86,0,0,0,0,0,
1,0,0,0,0,0,0,0,166,0,0,0,0,0,1,0,
0,0,0,0,0,7,146,0,0,0,0,0,1,0,0,0,
0,0,0,1,62,0,0,0,0,0,1,0,0,0,0,0,
0,7,222,0,0,0,0,0,1,0,0,0,0,0,0,4,
192,0,0,0,0,0,1,0,0,0,0,0,0,4,102,0,
0,0,0,0,1,0,0,0,0,0,0,2,90,0,0,0,
0,0,1,0,0,0,0,0,0,1,94,0,0,0,0,0,
1,0,0,0,0,0,0,0,52,0,0,0,0,0,1,0,
0,0,0,0,0,2,192,0,0,0,0,0,1,0,0,0,
0,0,0,7,16,0,0,0,0,0,1,0,0,0,0,0,
0,5,244,0,2,0,0,0,4,0,0,0,51,0,0,5,
204,0,0,0,0,0,1,0,0,0,0,0,0,1,28,0,
2,0,0,0,1,0,0,0,50,0,0,7,88,0,0,0,
0,0,1,0,0,0,0,0,0,6,12,0,0,0,0,0,
1,0,0,0,0,0,0,5,76,0,0,0,0,0,1,0,
0,0,0,0,0,6,204,0,0,0,0,0,1,0,0,0,
0,0,0,0,80,0,0,0,0,0,1,0,0,0,0,0,
0,5,164,0,0,0,0,0,1,0,0,0,0,0,0,7,
190,0,0,0,0,0,1,0,0,0,0,0,0,2,148,0,
0,0,0,0,1,0,0,0,0,0,0,3,76,0,0,0,
0,0,1,0,0,0,0,0,0,6,160,0,0,0,0,0,
1,0,0,0,0,0,0,0,220,0,0,0,0,0,1,0,
0,0,0,0,0,6,120,0,0,0,0,0,1,0,0,0,
0,0,0,1,218,0,0,0,0,0,1,0,0,0,0,0,
0,7,56,0,0,0,0,0,1,0,0,0,0,0,0,5,
34,0,0,0,0,0,1,0,0,0,0,0,0,0,52,0,
0,0,0,0,1,0,0,0,0,0,0,0,166,0,0,0,
0,0,1,0,0,0,0,0,0,5,164,0,0,0,0,0,
1,0,0,0,0,0,0,3,76,0,0,0,0,0,1,0,
0,0,0,0,0,0,220,0,0,0,0,0,1,0,0,0,
0,0,0,0,166,0,0,0,0,0,1,0,0,0,0,0,
0,5,164,0,0,0,0,0,1,0,0,0,0,0,0,0,
220,0,0,0,0,0,1,0,0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,3,0,0,120,60,0,113,0,
109,0,108,0,8,8,1,90,92,0,109,0,97,0,105,0,
110,0,46,0,113,0,109,0,108,0,2,0,0,7,185,0,
117,0,105,0,11,8,34,223,28,0,77,0,101,0,110,0,
117,0,66,0,97,0,114,0,46,0,113,0,109,0,108,0,
22,13,69,210,156,0,72,0,101,0,120,0,67,0,111,0,
108,0,111,0,117,0,114,0,82,0,111,0,119,0,76,0,
97,0,121,0,111,0,117,0,116,0,46,0,113,0,109,0,
108,0,15,4,94,106,220,0,83,0,104,0,111,0,114,0,
116,0,99,0,117,0,116,0,82,0,111,0,119,0,46,0,
113,0,109,0,108,0,24,5,107,250,60,0,83,0,119,0,
97,0,116,0,99,0,104,0,70,0,111,0,99,0,117,0,
115,0,82,0,101,0,99,0,116,0,97,0,110,0,103,0,
108,0,101,0,46,0,113,0,109,0,108,0,17,14,111,144,
92,0,73,0,99,0,111,0,110,0,82,0,101,0,99,0,
116,0,97,0,110,0,103,0,108,0,101,0,46,0,113,0,
109,0,108,0,9,4,191,253,60,0,80,0,97,0,110,0,
101,0,108,0,46,0,113,0,109,0,108,0,14,10,211,174,
130,0,43,0,110,0,97,0,116,0,105,0,118,0,101,0,
109,0,101,0,110,0,117,0,98,0,97,0,114,0,13,5,
176,20,252,0,72,0,117,0,101,0,83,0,108,0,105,0,
100,0,101,0,114,0,46,0,113,0,109,0,108,0,26,7,
203,210,252,0,78,0,101,0,119,0,84,0,105,0,108,0,
101,0,115,0,101,0,116,0,80,0,114,0,111,0,106,0,
101,0,99,0,116,0,80,0,111,0,112,0,117,0,112,0,
46,0,113,0,109,0,108,0,30,3,238,64,156,0,84,0,
101,0,120,0,116,0,117,0,114,0,101,0,100,0,70,0,
105,0,108,0,108,0,83,0,101,0,116,0,116,0,105,0,
110,0,103,0,115,0,68,0,105,0,97,0,108,0,111,0,
103,0,46,0,113,0,109,0,108,0,22,14,246,87,252,0,
77,0,111,0,118,0,101,0,67,0,111,0,110,0,116,0,
101,0,110,0,116,0,115,0,68,0,105,0,97,0,108,0,
111,0,103,0,46,0,113,0,109,0,108,0,36,3,138,117,
188,0,84,0,101,0,120,0,116,0,117,0,114,0,101,0,
100,0,70,0,105,0,108,0,108,0,86,0,97,0,114,0,
105,0,97,0,110,0,99,0,101,0,82,0,97,0,110,0,
103,0,101,0,100,0,83,0,108,0,105,0,100,0,101,0,
114,0,46,0,113,0,109,0,108,0,26,7,165,88,188,0,
65,0,110,0,105,0,109,0,97,0,116,0,105,0,111,0,
110,0,83,0,101,0,116,0,116,0,105,0,110,0,103,0,
115,0,80,0,111,0,112,0,117,0,112,0,46,0,113,0,
109,0,108,0,19,13,245,58,156,0,67,0,97,0,110,0,
118,0,97,0,115,0,83,0,105,0,122,0,101,0,80,0,
111,0,112,0,117,0,112,0,46,0,113,0,109,0,108,0,
11,8,51,156,60,0,84,0,111,0,111,0,108,0,66,0,
97,0,114,0,46,0,113,0,109,0,108,0,31,1,64,156,
156,0,78,0,101,0,119,0,76,0,97,0,121,0,101,0,
114,0,101,0,100,0,73,0,109,0,97,0,103,0,101,0,
80,0,114,0,111,0,106,0,101,0,99,0,116,0,80,0,
111,0,112,0,117,0,112,0,46,0,113,0,109,0,108,0,
19,1,23,12,156,0,72,0,115,0,108,0,83,0,105,0,
109,0,112,0,108,0,101,0,80,0,105,0,99,0,107,0,
101,0,114,0,46,0,113,0,109,0,108,0,16,14,4,211,
92,0,68,0,105,0,97,0,108,0,111,0,103,0,66,0,
117,0,116,0,116,0,111,0,110,0,46,0,113,0,109,0,
108,0,15,2,102,149,188,0,67,0,111,0,108,0,111,0,
117,0,114,0,80,0,97,0,110,0,101,0,108,0,46,0,
113,0,109,0,108,0,24,3,185,159,156,0,78,0,101,0,
119,0,73,0,109,0,97,0,103,0,101,0,80,0,114,0,
111,0,106,0,101,0,99,0,116,0,80,0,111,0,112,0,
117,0,112,0,46,0,113,0,109,0,108,0,29,2,178,203,
92,0,83,0,97,0,116,0,117,0,114,0,97,0,116,0,
105,0,111,0,110,0,76,0,105,0,103,0,104,0,116,0,
110,0,101,0,115,0,115,0,80,0,105,0,99,0,107,0,
101,0,114,0,46,0,113,0,109,0,108,0,14,4,239,173,
220,0,69,0,114,0,114,0,111,0,114,0,80,0,111,0,
112,0,117,0,112,0,46,0,113,0,109,0,108,0,25,0,
83,45,220,0,80,0,114,0,111,0,106,0,101,0,99,0,
116,0,84,0,101,0,109,0,112,0,108,0,97,0,116,0,
101,0,66,0,117,0,116,0,116,0,111,0,110,0,46,0,
113,0,109,0,108,0,21,7,116,131,156,0,84,0,105,0,
108,0,101,0,115,0,101,0,116,0,84,0,121,0,112,0,
101,0,67,0,97,0,110,0,118,0,97,0,115,0,46,0,
113,0,109,0,108,0,18,5,9,227,188,0,73,0,99,0,
111,0,110,0,84,0,111,0,111,0,108,0,66,0,117,0,
116,0,116,0,111,0,110,0,46,0,113,0,109,0,108,0,
16,6,254,249,156,0,67,0,111,0,108,0,111,0,117,0,
114,0,66,0,117,0,116,0,116,0,111,0,110,0,46,0,
113,0,109,0,108,0,27,3,117,90,156,0,84,0,111,0,
111,0,108,0,66,0,117,0,116,0,116,0,111,0,110,0,
77,0,101,0,110,0,117,0,73,0,110,0,100,0,105,0,
99,0,97,0,116,0,111,0,114,0,46,0,113,0,109,0,
108,0,18,15,239,240,124,0,73,0,109,0,97,0,103,0,
101,0,83,0,105,0,122,0,101,0,80,0,111,0,112,0,
117,0,112,0,46,0,113,0,109,0,108,0,19,12,138,32,
28,0,73,0,109,0,97,0,103,0,101,0,84,0,121,0,
112,0,101,0,67,0,97,0,110,0,118,0,97,0,115,0,
46,0,113,0,109,0,108,0,19,4,50,172,220,0,67,0,
114,0,111,0,115,0,115,0,104,0,97,0,105,0,114,0,
67,0,117,0,114,0,115,0,111,0,114,0,46,0,113,0,
109,0,108,0,17,13,80,137,220,0,67,0,97,0,110,0,
118,0,97,0,115,0,67,0,111,0,108,0,111,0,117,0,
114,0,115,0,46,0,113,0,109,0,108,0,17,10,117,63,
188,0,90,0,111,0,111,0,109,0,73,0,110,0,100,0,
105,0,99,0,97,0,116,0,111,0,114,0,46,0,113,0,
109,0,108,0,9,8,172,235,28,0,43,0,109,0,97,0,
116,0,101,0,114,0,105,0,97,0,108,0,14,11,147,163,
252,0,69,0,114,0,114,0,111,0,114,0,76,0,97,0,
98,0,101,0,108,0,46,0,113,0,109,0,108,0,17,2,
143,130,156,0,84,0,111,0,111,0,108,0,83,0,105,0,
122,0,101,0,80,0,111,0,112,0,117,0,112,0,46,0,
113,0,109,0,108,0,14,5,71,176,156,0,76,0,97,0,
121,0,101,0,114,0,80,0,97,0,110,0,101,0,108,0,
46,0,113,0,109,0,108,0,17,14,176,231,60,0,79,0,
112,0,116,0,105,0,111,0,110,0,115,0,68,0,105,0,
97,0,108,0,111,0,103,0,46,0,113,0,109,0,108,0,
19,14,25,60,156,0,67,0,97,0,110,0,118,0,97,0,
115,0,67,0,111,0,110,0,116,0,97,0,105,0,110,0,
101,0,114,0,46,0,113,0,109,0,108,0,18,12,159,55,
60,0,65,0,110,0,105,0,109,0,97,0,116,0,105,0,
111,0,110,0,80,0,97,0,110,0,101,0,108,0,46,0,
113,0,109,0,108,0,10,0,202,193,220,0,43,0,117,0,
110,0,105,0,118,0,101,0,114,0,115,0,97,0,108,0,
17,8,100,8,28,0,84,0,105,0,108,0,101,0,115,0,
101,0,116,0,83,0,119,0,97,0,116,0,99,0,104,0,
46,0,113,0,109,0,108,0,13,15,91,100,28,0,83,0,
104,0,111,0,114,0,116,0,99,0,117,0,116,0,115,0,
46,0,113,0,109,0,108,0,26,11,110,26,156,0,76,0,
97,0,121,0,101,0,114,0,101,0,100,0,73,0,109,0,
97,0,103,0,101,0,84,0,121,0,112,0,101,0,67,0,
97,0,110,0,118,0,97,0,115,0,46,0,113,0,109,0,
108,0,19,5,135,146,220,0,78,0,101,0,119,0,80,0,
114,0,111,0,106,0,101,0,99,0,116,0,80,0,111,0,
112,0,117,0,112,0,46,0,113,0,109,0,108,0,13,13,
212,49,188,0,83,0,116,0,97,0,116,0,117,0,115,0,
66,0,97,0,114,0,46,0,113,0,109,0,108,0,18,6,
213,220,92,0,67,0,111,0,108,0,111,0,117,0,114,0,
83,0,101,0,108,0,101,0,99,0,116,0,111,0,114,0,
46,0,113,0,109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _qml_ui_ColourSelector_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_StatusBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_NewProjectPopup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_LayeredImageTypeCanvas_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_Shortcuts_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_TilesetSwatch_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui__0x2b_universal_CanvasColours_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_AnimationPanel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_CanvasContainer_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_OptionsDialog_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_LayerPanel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ToolSizePopup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ErrorLabel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui__0x2b_material_IconRectangle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ZoomIndicator_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_CanvasColours_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_CrosshairCursor_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ImageTypeCanvas_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ImageSizePopup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ToolButtonMenuIndicator_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ColourButton_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_IconToolButton_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui__0x2b_material_SwatchFocusRectangle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_TilesetTypeCanvas_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ProjectTemplateButton_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ErrorPopup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_SaturationLightnessPicker_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_NewImageProjectPopup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ColourPanel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_DialogButton_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_HslSimplePicker_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_main_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_NewLayeredImageProjectPopup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ToolBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_CanvasSizePopup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_AnimationSettingsPopup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui__0x2b_material_DialogButton_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_TexturedFillVarianceRangedSlider_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_MoveContentsDialog_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui__0x2b_universal_IconRectangle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_TexturedFillSettingsDialog_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_NewTilesetProjectPopup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui__0x2b_universal_SwatchFocusRectangle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui__0x2b_material_CanvasColours_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_HueSlider_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui__0x2b_nativemenubar_MenuBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_Panel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_IconRectangle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_SwatchFocusRectangle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_ShortcutRow_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_HexColourRowLayout_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ui_MenuBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ColourSelector.qml"), &QmlCacheGeneratedCode::_qml_ui_ColourSelector_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/StatusBar.qml"), &QmlCacheGeneratedCode::_qml_ui_StatusBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/NewProjectPopup.qml"), &QmlCacheGeneratedCode::_qml_ui_NewProjectPopup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/LayeredImageTypeCanvas.qml"), &QmlCacheGeneratedCode::_qml_ui_LayeredImageTypeCanvas_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/Shortcuts.qml"), &QmlCacheGeneratedCode::_qml_ui_Shortcuts_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/TilesetSwatch.qml"), &QmlCacheGeneratedCode::_qml_ui_TilesetSwatch_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/+universal/CanvasColours.qml"), &QmlCacheGeneratedCode::_qml_ui__0x2b_universal_CanvasColours_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/AnimationPanel.qml"), &QmlCacheGeneratedCode::_qml_ui_AnimationPanel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/CanvasContainer.qml"), &QmlCacheGeneratedCode::_qml_ui_CanvasContainer_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/OptionsDialog.qml"), &QmlCacheGeneratedCode::_qml_ui_OptionsDialog_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/LayerPanel.qml"), &QmlCacheGeneratedCode::_qml_ui_LayerPanel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ToolSizePopup.qml"), &QmlCacheGeneratedCode::_qml_ui_ToolSizePopup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ErrorLabel.qml"), &QmlCacheGeneratedCode::_qml_ui_ErrorLabel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/+material/IconRectangle.qml"), &QmlCacheGeneratedCode::_qml_ui__0x2b_material_IconRectangle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ZoomIndicator.qml"), &QmlCacheGeneratedCode::_qml_ui_ZoomIndicator_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/CanvasColours.qml"), &QmlCacheGeneratedCode::_qml_ui_CanvasColours_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/CrosshairCursor.qml"), &QmlCacheGeneratedCode::_qml_ui_CrosshairCursor_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ImageTypeCanvas.qml"), &QmlCacheGeneratedCode::_qml_ui_ImageTypeCanvas_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ImageSizePopup.qml"), &QmlCacheGeneratedCode::_qml_ui_ImageSizePopup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ToolButtonMenuIndicator.qml"), &QmlCacheGeneratedCode::_qml_ui_ToolButtonMenuIndicator_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ColourButton.qml"), &QmlCacheGeneratedCode::_qml_ui_ColourButton_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/IconToolButton.qml"), &QmlCacheGeneratedCode::_qml_ui_IconToolButton_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/+material/SwatchFocusRectangle.qml"), &QmlCacheGeneratedCode::_qml_ui__0x2b_material_SwatchFocusRectangle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/TilesetTypeCanvas.qml"), &QmlCacheGeneratedCode::_qml_ui_TilesetTypeCanvas_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ProjectTemplateButton.qml"), &QmlCacheGeneratedCode::_qml_ui_ProjectTemplateButton_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ErrorPopup.qml"), &QmlCacheGeneratedCode::_qml_ui_ErrorPopup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/SaturationLightnessPicker.qml"), &QmlCacheGeneratedCode::_qml_ui_SaturationLightnessPicker_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/NewImageProjectPopup.qml"), &QmlCacheGeneratedCode::_qml_ui_NewImageProjectPopup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ColourPanel.qml"), &QmlCacheGeneratedCode::_qml_ui_ColourPanel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/DialogButton.qml"), &QmlCacheGeneratedCode::_qml_ui_DialogButton_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/HslSimplePicker.qml"), &QmlCacheGeneratedCode::_qml_ui_HslSimplePicker_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/main.qml"), &QmlCacheGeneratedCode::_qml_main_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/NewLayeredImageProjectPopup.qml"), &QmlCacheGeneratedCode::_qml_ui_NewLayeredImageProjectPopup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ToolBar.qml"), &QmlCacheGeneratedCode::_qml_ui_ToolBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/CanvasSizePopup.qml"), &QmlCacheGeneratedCode::_qml_ui_CanvasSizePopup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/AnimationSettingsPopup.qml"), &QmlCacheGeneratedCode::_qml_ui_AnimationSettingsPopup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/+material/DialogButton.qml"), &QmlCacheGeneratedCode::_qml_ui__0x2b_material_DialogButton_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/TexturedFillVarianceRangedSlider.qml"), &QmlCacheGeneratedCode::_qml_ui_TexturedFillVarianceRangedSlider_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/MoveContentsDialog.qml"), &QmlCacheGeneratedCode::_qml_ui_MoveContentsDialog_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/+universal/IconRectangle.qml"), &QmlCacheGeneratedCode::_qml_ui__0x2b_universal_IconRectangle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/TexturedFillSettingsDialog.qml"), &QmlCacheGeneratedCode::_qml_ui_TexturedFillSettingsDialog_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/NewTilesetProjectPopup.qml"), &QmlCacheGeneratedCode::_qml_ui_NewTilesetProjectPopup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/+universal/SwatchFocusRectangle.qml"), &QmlCacheGeneratedCode::_qml_ui__0x2b_universal_SwatchFocusRectangle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/+material/CanvasColours.qml"), &QmlCacheGeneratedCode::_qml_ui__0x2b_material_CanvasColours_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/HueSlider.qml"), &QmlCacheGeneratedCode::_qml_ui_HueSlider_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/+nativemenubar/MenuBar.qml"), &QmlCacheGeneratedCode::_qml_ui__0x2b_nativemenubar_MenuBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/Panel.qml"), &QmlCacheGeneratedCode::_qml_ui_Panel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/IconRectangle.qml"), &QmlCacheGeneratedCode::_qml_ui_IconRectangle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/SwatchFocusRectangle.qml"), &QmlCacheGeneratedCode::_qml_ui_SwatchFocusRectangle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/ShortcutRow.qml"), &QmlCacheGeneratedCode::_qml_ui_ShortcutRow_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/HexColourRowLayout.qml"), &QmlCacheGeneratedCode::_qml_ui_HexColourRowLayout_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ui/MenuBar.qml"), &QmlCacheGeneratedCode::_qml_ui_MenuBar_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}
const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qml)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(qml_qml_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qml))
int QT_MANGLE_NAMESPACE(qCleanupResources_qml)() {
    Q_CLEANUP_RESOURCE(qml_qml_qmlcache);
    return 1;
}
