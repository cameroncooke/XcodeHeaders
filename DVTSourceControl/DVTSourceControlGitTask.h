//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTSourceControlAuthenticationStrategy, NSArray, NSData, NSError, NSMutableData, NSString, NSTask;

@interface DVTSourceControlGitTask : NSObject
{
    BOOL _waitToParseData;
    BOOL _readyToParseData;
    BOOL _cancelled;
    BOOL _userInitiated;
    BOOL _allowsSleep;
    BOOL _enforceTrustedServerFingerprint;
    BOOL _isCancelled;
    BOOL _representsXcodeServiceHostedRepository;
    NSTask *_task;
    NSString *_launchPath;
    NSString *_currentDirectoryPath;
    NSArray *_arguments;
    NSData *_data;
    NSMutableData *_errorData;
    NSString *_dataString;
    NSString *_command;
    NSError *_error;
    DVTSourceControlAuthenticationStrategy *_authenticationStrategy;
    CDUnknownBlockType _standardOutputFeedbackBlock;
    CDUnknownBlockType _standardErrorFeedbackBlock;
    NSString *_trustedServerFingerprint;
}

+ (BOOL)_mustSpecifyMD5ForSSH;
+ (id)dvt_UUIDString;
+ (id)_launchPathForTask:(id)arg1;
+ (id)_gitLaunchPath;
+ (id)_authenticationAgentExecutablePath;
+ (id)_idesc_stringFromData:(id)arg1;
+ (id)_idesc_stringFromMutableData:(id)arg1;
@property(readonly, nonatomic) BOOL representsXcodeServiceHostedRepository; // @synthesize representsXcodeServiceHostedRepository=_representsXcodeServiceHostedRepository;
@property(retain, nonatomic) NSString *trustedServerFingerprint; // @synthesize trustedServerFingerprint=_trustedServerFingerprint;
@property(copy, nonatomic) CDUnknownBlockType standardErrorFeedbackBlock; // @synthesize standardErrorFeedbackBlock=_standardErrorFeedbackBlock;
@property(copy, nonatomic) CDUnknownBlockType standardOutputFeedbackBlock; // @synthesize standardOutputFeedbackBlock=_standardOutputFeedbackBlock;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) BOOL enforceTrustedServerFingerprint; // @synthesize enforceTrustedServerFingerprint=_enforceTrustedServerFingerprint;
@property(retain, nonatomic) DVTSourceControlAuthenticationStrategy *authenticationStrategy; // @synthesize authenticationStrategy=_authenticationStrategy;
@property(nonatomic) BOOL allowsSleep; // @synthesize allowsSleep=_allowsSleep;
@property(nonatomic) BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) NSString *command; // @synthesize command=_command;
@property(retain, nonatomic) NSString *dataString; // @synthesize dataString=_dataString;
@property BOOL readyToParseData; // @synthesize readyToParseData=_readyToParseData;
@property(readonly, nonatomic) NSMutableData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSString *currentDirectoryPath; // @synthesize currentDirectoryPath=_currentDirectoryPath;
@property(retain, nonatomic) NSString *launchPath; // @synthesize launchPath=_launchPath;
@property(readonly, nonatomic) NSTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)outputLinesWithBlock:(CDUnknownBlockType)arg1;
- (id)outputLines;
- (void)parseDataOrGenerateErrorForTask:(id)arg1 operation:(id)arg2;
- (void)setWaitToParseData:(BOOL)arg1;
- (void)run;
- (id)readDataFromFileHandle:(id)arg1 intoBuffer:(id)arg2 runloopMode:(id)arg3 outstandingOperationCounter:(long long *)arg4 dataParsingBlock:(CDUnknownBlockType)arg5;
- (id)rawErrorOutput;
- (id)rawStandardOutput;
- (id)rawInput;
- (id)errorFromErrorMessage:(id)arg1;
- (id)init;

@end

