//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGenerator : NSObject
{
    struct _opaque_pthread_mutex_t _programMutex;
    struct __CFDictionary *_shaders;
    struct __CFDictionary *_trackedResourcesToHashcode;
}

+ (id)generatorWithProfile:(int)arg1;
- (void)releaseProgramForResource:(id)arg1;
- (struct __C3DFXProgram *)programWithHashCode:(struct __C3DRendererElementProgramHashCode *)arg1 trackedResource:(id)arg2 introspectionDataPtr:(CDStruct_5d961f59 *)arg3;
@property(readonly, nonatomic) int profile;
- (void)dealloc;
- (id)init;

@end

