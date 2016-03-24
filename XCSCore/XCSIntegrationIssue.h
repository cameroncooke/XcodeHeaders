//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSData, NSNumber, NSString, XCSIssueAssociations;

@interface XCSIntegrationIssue : XCSObject
{
    BOOL _silenced;
    unsigned long long _type;
    unsigned long long _status;
    NSString *_issueType;
    NSString *_message;
    NSString *_target;
    NSString *_testCase;
    NSData *_documentLocationData;
    NSString *_documentFilePath;
    NSNumber *_lineNumber;
    NSNumber *_exitCode;
    NSArray *_commits;
    NSString *_integrationID;
    unsigned long long _age;
    NSString *_fixItType;
    NSString *_assignee;
    XCSIssueAssociations *_associations;
    NSString *_sanitizedMessage;
}

+ (id)integrationIssueWithType:(unsigned long long)arg1 status:(unsigned long long)arg2 issueType:(id)arg3 message:(id)arg4 target:(id)arg5 testCase:(id)arg6 documentLocationData:(id)arg7 documentFilePath:(id)arg8 lineNumber:(id)arg9 exitCode:(id)arg10 commits:(struct NSArray *)arg11 integrationID:(id)arg12 age:(unsigned long long)arg13 fixItType:(id)arg14 validationErrors:(id *)arg15;
@property(readonly, nonatomic) NSString *sanitizedMessage; // @synthesize sanitizedMessage=_sanitizedMessage;
@property(readonly, nonatomic) XCSIssueAssociations *associations; // @synthesize associations=_associations;
@property(readonly, nonatomic) BOOL silenced; // @synthesize silenced=_silenced;
@property(readonly, nonatomic) NSString *assignee; // @synthesize assignee=_assignee;
@property(readonly, nonatomic) NSString *fixItType; // @synthesize fixItType=_fixItType;
@property(readonly, nonatomic) unsigned long long age; // @synthesize age=_age;
@property(readonly, nonatomic) NSString *integrationID; // @synthesize integrationID=_integrationID;
@property(readonly, nonatomic) NSArray *commits; // @synthesize commits=_commits;
@property(readonly, nonatomic) NSNumber *exitCode; // @synthesize exitCode=_exitCode;
@property(readonly, nonatomic) NSNumber *lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) NSString *documentFilePath; // @synthesize documentFilePath=_documentFilePath;
@property(readonly, nonatomic) NSData *documentLocationData; // @synthesize documentLocationData=_documentLocationData;
@property(readonly, nonatomic) NSString *testCase; // @synthesize testCase=_testCase;
@property(readonly, nonatomic) NSString *target; // @synthesize target=_target;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *issueType; // @synthesize issueType=_issueType;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)_validateType:(unsigned long long)arg1 status:(unsigned long long)arg2 issueType:(id)arg3 message:(id)arg4 target:(id)arg5 testCase:(id)arg6 documentLocationData:(id)arg7 documentFilePath:(id)arg8 lineNumber:(id)arg9 exitCode:(id)arg10 commits:(struct NSArray *)arg11 integrationID:(id)arg12 age:(unsigned long long)arg13 fixItType:(id)arg14 associations:(id)arg15 validationErrors:(id *)arg16;
- (unsigned long long)hash;
- (BOOL)isEqualToIntegrationIssue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithID:(id)arg1 type:(unsigned long long)arg2 status:(unsigned long long)arg3 issueType:(id)arg4 message:(id)arg5 target:(id)arg6 testCase:(id)arg7 documentLocationData:(id)arg8 documentFilePath:(id)arg9 lineNumber:(id)arg10 exitCode:(id)arg11 commits:(struct NSArray *)arg12 integrationID:(id)arg13 age:(unsigned long long)arg14 fixItType:(id)arg15 silenced:(BOOL)arg16 associations:(id)arg17 validationErrors:(id *)arg18;

@end

