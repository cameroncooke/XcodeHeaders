//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

#import "DYPTraceAPIItem.h"

@class GPUTraceDisplayableItem, GPUTraceResources, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface GPUTraceAPIItem : GPUTraceOutlineItem <DYPTraceAPIItem>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_boundResources;
    NSArray *_allResources;
    int _functionIndex;
    int _displayIndex;
    GPUTraceResources *_resourceGroups;
    NSMutableArray *_stackFrames;
    BOOL _loadingResourceTree;
    BOOL _hasResourceTree;
    BOOL _hasStateMirror;
    int _maxIssueSeverity;
    GPUTraceDisplayableItem *_previousDisplayableItem;
}

@property(retain, nonatomic) id <DYPTraceAPIItem> previousDisplayableItem; // @synthesize previousDisplayableItem=_previousDisplayableItem;
@property BOOL loadingResourceTree; // @synthesize loadingResourceTree=_loadingResourceTree;
@property BOOL hasResourceTree; // @synthesize hasResourceTree=_hasResourceTree;
@property(retain) NSMutableArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(retain) GPUTraceResources *resourceGroups; // @synthesize resourceGroups=_resourceGroups;
@property(readonly) int displayIndex; // @synthesize displayIndex=_displayIndex;
@property(readonly) int functionIndex; // @synthesize functionIndex=_functionIndex;
@property(retain) NSArray *allResources; // @synthesize allResources=_allResources;
@property(retain) NSArray *boundResources; // @synthesize boundResources=_boundResources;
- (void).cxx_destruct;
- (id)generateLabel;
- (void)releaseRealizedResources;
- (void)_generateResources:(BOOL)arg1;
- (BOOL)generateResources;
- (BOOL)generateResourceTopLevelGroups;
- (id)stackFramesWithVisibleSource;
- (void)generateStackFrameItems;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)UUIDSection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithController:(id)arg1 parent:(id)arg2 functionIndex:(int)arg3 displayIndex:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) struct Function *decodedFunction;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <DYPStateMirror> stateMirror;
@property(readonly) Class superclass;

@end
