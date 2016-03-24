//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface IDEDistributionIssue : NSObject
{
    int _severity;
    NSError *_error;
}

+ (id)issuesFromErrors:(id)arg1 withSeverity:(int)arg2;
+ (id)issuesFromITunesResponse:(id)arg1;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) int severity; // @synthesize severity=_severity;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSeverity:(int)arg1 error:(id)arg2;

@end

