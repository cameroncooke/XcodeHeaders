//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDevice, NSCountedSet, NSMutableOrderedSet, NSNumber;

@interface IDEGaugeDataQueryCoordinator : NSObject
{
    DVTDevice *_device;
    NSNumber *_pid;
    NSMutableOrderedSet *_queries;
    NSMutableOrderedSet *_services;
    NSCountedSet *_attributes;
}

+ (id)sharedQueryCoordinatorWithPID:(id)arg1 onDevice:(id)arg2;
@property(retain, nonatomic) NSCountedSet *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSMutableOrderedSet *services; // @synthesize services=_services;
@property(retain, nonatomic) NSMutableOrderedSet *queries; // @synthesize queries=_queries;
@property(retain, nonatomic) NSNumber *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) DVTDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)handleResultDict:(id)arg1;
- (void)query:(id)arg1 didAddObservedAttributes:(id)arg2 andRemoveObservedAttributes:(id)arg3;
- (void)removeQuery:(id)arg1;
- (void)addQuery:(id)arg1;
- (id)_noteAttributesDidChange;
- (id)initForProcessWithPID:(id)arg1 onDevice:(id)arg2;

@end

