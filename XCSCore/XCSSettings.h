//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSString;

@interface XCSSettings : XCSObject
{
    NSString *_fromName;
    NSString *_fromAddress;
}

+ (id)smtpSettingsWithHost:(id)arg1;
+ (id)sendmailSettings;
@property(retain, nonatomic) NSString *fromAddress; // @synthesize fromAddress=_fromAddress;
@property(retain, nonatomic) NSString *fromName; // @synthesize fromName=_fromName;
- (void).cxx_destruct;
- (id)saveRepresentation;
- (id)patchRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithID:(id)arg1 revision:(id)arg2 docType:(id)arg3 service:(id)arg4 transportType:(long long)arg5 smtpHost:(id)arg6 fromName:(id)arg7 fromAddress:(id)arg8 replyToName:(id)arg9 replyToAddress:(id)arg10 serviceEnabled:(BOOL)arg11 integrationTimeoutSeconds:(long long)arg12;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(nonatomic) long long integrationTimeoutSeconds; // @dynamic integrationTimeoutSeconds;
@property(retain, nonatomic) NSString *replyToAddress; // @dynamic replyToAddress;
@property(retain, nonatomic) NSString *replyToName; // @dynamic replyToName;
@property(nonatomic) BOOL serviceEnabled; // @dynamic serviceEnabled;
@property(retain, nonatomic) NSString *smtpHost; // @dynamic smtpHost;
@property(nonatomic) long long transportType; // @dynamic transportType;

@end

