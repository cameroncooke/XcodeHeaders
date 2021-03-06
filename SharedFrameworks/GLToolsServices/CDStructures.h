//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Argument {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct CoreFunction {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    union {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
    struct Argument _field6;
    struct Argument _field7[16];
    unsigned int _field8;
    unsigned int _field9;
    void *_field10;
    void *_field11;
};

struct Function {
    struct CoreFunction _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
    unsigned short _field5;
    unsigned short _field6;
    int _field7;
    void *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    struct Function *_field13;
    void *_field14;
};

struct ObjectTrackingMap<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>, unsigned long long> {
    struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> mInternalIDMap;
    struct unordered_map<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>>> mObjectMap;
    int mNextFreeInternalID;
};

struct PassthroughBase {
    struct function<void *(const char *, unsigned long *)> LoadURLData;
};

struct StateMirrorManager<GPUTools::AnalyzerBaseObjectTypes> {
    struct unordered_map<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>>> _contextStateMirrorMap;
    struct unordered_map<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>>> _sharegroupStateMirrorMap;
    struct ObjectTrackingMap<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>, unsigned long long> _drawableInfoMap;
    struct PassthroughBase _passthrough;
    unsigned long long _surfaceBoundsDrawableID;
    int _deviceOrientation;
    int _lastFunctionIndex;
};

struct Stream {
    struct VMBuffer *_field1;
    union {
        void *_field1;
        struct *_field2;
    } _field2;
    void *_field3;
    unsigned long long _field4;
    struct __CFString *_field5;
    CDUnknownBlockType _field6;
    CDUnknownBlockType _field7;
    int _field8;
    _Bool _field9;
};

struct VMBuffer;

struct __hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>;

struct __hash_node<unsigned long long, void *>;

struct function<void *(const char *, unsigned long *)> {
    struct type __buf_;
    struct __base<void *(const char *, unsigned long *)> *__f_;
};

struct type {
    unsigned char __lx[24];
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<unsigned long long, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>>> {
        struct __hash_node<unsigned long long, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>>> {
    struct __hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, std::__1::hash<int>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>>>, std::__1::equal_to<int>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
    struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
        struct unique_ptr<std::__1::__hash_node<unsigned long long, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> {
                struct __hash_node<unsigned long long, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<unsigned long long>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<GPUTools::FD::Function, std::__1::allocator<GPUTools::FD::Function>> {
    struct Function *__begin_;
    struct Function *__end_;
    struct __compressed_pair<GPUTools::FD::Function *, std::__1::allocator<GPUTools::FD::Function>> {
        struct Function *__first_;
    } __end_cap_;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct StateMirrorManager<GPUTools::AnalyzerBaseObjectTypes> {
    struct unordered_map<unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, GPUTools::SM::GL::ContextStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>>> _contextStateMirrorMap;
    struct unordered_map<unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, GPUTools::SM::GL::SharegroupStateMirror<GPUTools::AnalyzerBaseObjectTypes>*>>> _sharegroupStateMirrorMap;
    struct ObjectTrackingMap<GPUTools::SM::GL::DrawableInfo<GPUTools::AnalyzerBaseObjectTypes>, unsigned long long> _drawableInfoMap;
    struct PassthroughBase _passthrough;
    unsigned long long _surfaceBoundsDrawableID;
    int _deviceOrientation;
    int _lastFunctionIndex;
} StateMirrorManager_5097919b;

typedef struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
    struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
        struct unique_ptr<std::__1::__hash_node<unsigned long long, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> {
                struct __hash_node<unsigned long long, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<unsigned long long>> {
            float _field1;
        } _field4;
    } _field1;
} unordered_set_febeaddf;

typedef struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__first_;
    } __end_cap_;
} vector_7dcb3552;

