//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IBStaticlyDeclaredIntegrationKeyPathsManager : NSObject
{
    NSArray *flattenedKeyPathsByClass;
    NSArray *keyPathsByClass;
}

+ (id)sharedInstnace;
- (id)flattenedKeyPathsForSetWithID:(long long)arg1 andClass:(Class)arg2;
- (void)removeKeyPaths:(id)arg1 fromKeyPathSetWithID:(long long)arg2 forClass:(Class)arg3;
- (void)addKeyPaths:(id)arg1 toKeyPathSetWithID:(long long)arg2 forClass:(Class)arg3;
- (void)dropKeyPathIndexes;
- (void)dealloc;
- (id)init;

@end

