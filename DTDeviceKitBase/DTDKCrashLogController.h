//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DTDKCrashLogController : NSObject
{
    NSString *_statusMessage;
    NSString *_symbolicationStatus;
}

+ (id)keyPathsForValuesAffectingStatusMessage;
+ (id)controller;
@property(copy) NSString *symbolicationStatus; // @synthesize symbolicationStatus=_symbolicationStatus;
- (void).cxx_destruct;
- (void)enqueueLogForSymbolication:(id)arg1;
- (id)crashLogs;
- (void)copyExternalCrashLog:(id)arg1;
- (_Bool)shouldAcceptDroppedCrashLogAtPath:(id)arg1;
- (id)crashLogRootDirectory;
- (id)legacyRootDirectory;
@property(copy) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
- (Class)_database;
@property(readonly) _Bool enableCrashLogSupport;

@end

