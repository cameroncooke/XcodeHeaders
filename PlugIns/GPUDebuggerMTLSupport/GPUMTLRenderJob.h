//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPURenderJob.h"

__attribute__((visibility("hidden")))
@interface GPUMTLRenderJob : GPURenderJob
{
    id <DYPEnumUtils> _enumUtils;
    unsigned long long _selectedLevel;
    unsigned long long _selectedSlice;
    unsigned long long _attachmentIndex;
}

@property(readonly, nonatomic) unsigned long long attachmentIndex; // @synthesize attachmentIndex=_attachmentIndex;
@property(nonatomic) unsigned long long selectedSlice; // @synthesize selectedSlice=_selectedSlice;
@property(nonatomic) unsigned long long selectedLevel; // @synthesize selectedLevel=_selectedLevel;
- (void).cxx_destruct;
- (BOOL)showOverlay;
- (void)setRenderingAttributes:(id)arg1;
- (struct CGSize)imageSize;
- (BOOL)isColor;
- (BOOL)flipped;
- (id)displayElementName;
- (BOOL)isStencilDisplayElement;
- (BOOL)isDepthDisplayElement;
- (void)resolveWithTraceResourceItem:(id)arg1;
- (id)initWithResource:(id)arg1 modelFactory:(id)arg2 attachmentIndex:(unsigned long long)arg3 overlayResource:(id)arg4 framebuffer:(id)arg5;

@end

