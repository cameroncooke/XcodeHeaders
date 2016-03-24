//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLToolsServices/DYGLResourceObject.h>

#import "DYFramebuffer.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface DYGLFrameBufferObject : DYGLResourceObject <DYFramebuffer>
{
    unsigned int _readBuffer;
    NSDictionary *_attachmentsDict;
    NSArray *_drawBuffers;
}

@property(readonly, nonatomic) unsigned int readBuffer; // @synthesize readBuffer=_readBuffer;
@property(readonly, nonatomic) NSArray *drawBuffers; // @synthesize drawBuffers=_drawBuffers;
@property(readonly, nonatomic) NSDictionary *attachmentsDict; // @synthesize attachmentsDict=_attachmentsDict;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned long long containerID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isStatic;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) NSMutableDictionary *properties;
@property(readonly, nonatomic) unsigned int resourceType;
@property(readonly) Class superclass;

@end

