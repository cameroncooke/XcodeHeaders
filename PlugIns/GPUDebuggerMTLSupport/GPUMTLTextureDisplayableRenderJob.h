//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/GPUMTLRenderJob.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLTextureDisplayableRenderJob : GPUMTLRenderJob
{
    NSString *_displayElementName;
}

- (id)displayElementName;
- (void).cxx_destruct;
- (BOOL)isStencilDisplayElement;
- (BOOL)isDepthDisplayElement;
- (void)_determineElementNameWithItem:(id)arg1 andElementIndex:(unsigned long long)arg2;
- (id)initWithResource:(id)arg1 modelFactory:(id)arg2 displayableItem:(id)arg3 elementIndex:(unsigned long long)arg4 level:(unsigned long long)arg5 slice:(unsigned long long)arg6;

@end

