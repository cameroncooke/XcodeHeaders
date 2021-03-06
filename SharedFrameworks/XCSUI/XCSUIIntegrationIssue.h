//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTRadarSupport_Issue.h"

@class NSString, XCSIntegration, XCSIntegrationIssue;

@interface XCSUIIntegrationIssue : NSObject <DVTRadarSupport_Issue>
{
    unsigned long long _issueUIType;
    XCSIntegrationIssue *_issue;
    XCSIntegration *_integration;
}

+ (id)summaryStringForIssues:(id)arg1;
+ (id)colorForUIIssueType:(unsigned long long)arg1;
+ (id)issueTypeStringFromUIIssueType:(unsigned long long)arg1;
@property(readonly) XCSIntegration *integration; // @synthesize integration=_integration;
@property(readonly) XCSIntegrationIssue *issue; // @synthesize issue=_issue;
@property(readonly) unsigned long long issueUIType; // @synthesize issueUIType=_issueUIType;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long associatedRadarID;
@property(readonly, copy, nonatomic) NSString *stringRepresentation;
@property(readonly, copy, nonatomic) NSString *briefStringRepresentation;
- (id)tinyStringRepresentation;
- (id)sourceFilename;
@property(readonly, nonatomic) id underlyingIssue;
- (id)initWithIntegrationIssue:(id)arg1 type:(unsigned long long)arg2 integration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

