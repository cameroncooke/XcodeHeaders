//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapMessage.h>

@class NSDictionary, NSString;

@interface DTTapStatusMessage : DTTapMessage
{
}

- (void)setInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *info;
- (void)setNotice:(id)arg1;
@property(readonly, copy, nonatomic) NSString *notice;
- (void)setTimestamp:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long timestamp;
- (void)setStatus:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int status;
- (id)initWithStatus:(unsigned int)arg1 timestamp:(unsigned long long)arg2 notice:(id)arg3 info:(id)arg4;

@end

