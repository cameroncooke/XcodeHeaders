//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYInOrderInstructionFilesVisitor.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, DYCaptureSessionInfo, DYFunctionTracer, GPUTraceDisplayableItem, GPUTraceGroupItem, GPUTraceProgramGroup, GPUTraceSession, IDELaunchSession, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface GPUTraceOutline : DYInOrderInstructionFilesVisitor <DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    DYFunctionTracer *_tracer;
    DYCaptureSessionInfo *_captureSessionInfo;
    GPUTraceSession *_traceSession;
    GPUTraceProgramGroup *_rootProgramGroup;
    GPUTraceGroupItem *_currentGroup;
    GPUTraceDisplayableItem *_currentDisplayableItem;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _functionIndexToDisplayIndexMap;
    IDELaunchSession *_launchSession;
    NSMutableDictionary *_threadNameDict;
    NSMutableDictionary *_editorsDict;
    NSMutableArray *_frames;
    NSMutableArray *_allMarkerItems;
    NSMutableArray *_allAPIItems;
    unsigned long long _currentThread;
    unsigned long long _currentQueue;
    BOOL _processingTraceFiles;
    NSMutableArray *_allDisplayableItems;
    NSString *_contentDelegateUUID;
    GPUTraceGroupItem *_domainProviderRootResourceGroup;
}

+ (void)initialize;
@property(readonly) DYFunctionTracer *tracer; // @synthesize tracer=_tracer;
@property(readonly) GPUTraceProgramGroup *rootProgramGroup; // @synthesize rootProgramGroup=_rootProgramGroup;
@property(readonly) GPUTraceGroupItem *domainProviderRootResourceGroup; // @synthesize domainProviderRootResourceGroup=_domainProviderRootResourceGroup;
@property(readonly) NSString *contentDelegateUUID; // @synthesize contentDelegateUUID=_contentDelegateUUID;
@property(retain) NSMutableArray *allAPIItems; // @synthesize allAPIItems=_allAPIItems;
@property(retain) NSMutableArray *allMarkerItems; // @synthesize allMarkerItems=_allMarkerItems;
@property(retain) NSMutableArray *allDisplayableItems; // @synthesize allDisplayableItems=_allDisplayableItems;
@property(readonly) NSMutableDictionary *editorsDict; // @synthesize editorsDict=_editorsDict;
@property(retain) NSMutableArray *frames; // @synthesize frames=_frames;
@property(readonly) DYCaptureSessionInfo *captureSessionInfo; // @synthesize captureSessionInfo=_captureSessionInfo;
@property(retain) GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resourceItemOfType:(unsigned int)arg1 resourceID:(unsigned long long)arg2 forFunctionIndex:(unsigned int)arg3;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromDisplayIndex:(unsigned int)arg1;
@property(readonly) unsigned int totalfunctionIndexCount; // @dynamic totalfunctionIndexCount;
- (id)locateDisplayableItemToDraw:(id)arg1 isAssociatedWithStateItem:(char *)arg2;
- (void)addDisplayableItem:(id)arg1;
- (void)performPostCaptureVisitActions;
- (void)performPreCaptureVisitActions;
- (void)performPreVisitActions;
@property(readonly) __weak GPUTraceDisplayableItem *lastDisplayableItem; // @dynamic lastDisplayableItem;
@property(readonly) GPUTraceGroupItem *rootProcessItem; // @dynamic rootProcessItem;
@property(readonly) NSMutableArray *allPrograms; // @dynamic allPrograms;
@property(readonly) NSURL *captureArchiveURL; // @dynamic captureArchiveURL;
- (void)primitiveInvalidate;
- (id)initWithTraceSession:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

