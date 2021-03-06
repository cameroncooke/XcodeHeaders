//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYCaptureArchive, DYContinuation, DYFuture, DYGuestAppSession, DYTransportSource, NSError, NSMapTable, NSMutableDictionary;

@interface DYCaptureSession : NSObject
{
    DYGuestAppSession *_session;
    DYCaptureArchive *_archive;
    struct dispatch_queue_s *_queue;
    NSMutableDictionary *_finalConfigurationDictionary;
    DYTransportSource *_source;
    DYContinuation *_invalidationCompletion;
    DYFuture *_iconFuture;
    NSMutableDictionary *_buffers;
    NSError *_error;
    NSMapTable *_observersMap;
    struct _NSRange _frameRange;
    CDStruct_faeedbfb _stats;
    int _state;
    unsigned int _serial;
    BOOL _automaticallyDeleteArchiveOnFailure;
    int _storeSymbolicatorSignature;
    BOOL _triggerOnNextGraphicsCommand;
    BOOL _lockGraphicsAfterCompletion;
    BOOL _harvestStateAtEnd;
    BOOL _suspendAfterCompletion;
    BOOL _complete;
    BOOL _clientDidSendAllData;
    BOOL _deviceSupportsSessionSerial;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(nonatomic) int storeSymbolicatorSignature; // @synthesize storeSymbolicatorSignature=_storeSymbolicatorSignature;
@property(nonatomic) BOOL suspendAfterCompletion; // @synthesize suspendAfterCompletion=_suspendAfterCompletion;
@property(nonatomic) BOOL harvestStateAtEnd; // @synthesize harvestStateAtEnd=_harvestStateAtEnd;
@property(nonatomic) BOOL lockGraphicsAfterCompletion; // @synthesize lockGraphicsAfterCompletion=_lockGraphicsAfterCompletion;
@property(nonatomic) BOOL triggerOnNextGraphicsCommand; // @synthesize triggerOnNextGraphicsCommand=_triggerOnNextGraphicsCommand;
@property(nonatomic) struct _NSRange frameRange; // @synthesize frameRange=_frameRange;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL automaticallyDeleteArchiveOnFailure; // @synthesize automaticallyDeleteArchiveOnFailure=_automaticallyDeleteArchiveOnFailure;
@property(readonly, retain, nonatomic) DYCaptureArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
- (void)_replaceArchive:(id)arg1;
- (void)_postProcessArchive;
- (void)_saveAPISpecificData:(id)arg1;
- (void)_setupFinalConfigurationDictionary:(id)arg1;
- (void)_receivedAllClientData:(id)arg1;
- (void)_flushBuffers;
- (BOOL)stopCapturing;
- (BOOL)startCapturing;
- (BOOL)_activateWithSession:(id)arg1 serial:(unsigned int)arg2 invalidationCompletion:(id)arg3;
- (id)_allowedSessionInfoBaseClasses;
- (BOOL)_sendActivationMessage;
- (void)invalidate;
- (void)_invalidate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)notifyOnQueue:(struct dispatch_queue_s *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_postStateChange:(int)arg1;
- (void)copyStatistics:(CDStruct_faeedbfb *)arg1;
@property(nonatomic) BOOL invalid; // @dynamic invalid;
@property(readonly, nonatomic) BOOL active; // @dynamic active;
@property(nonatomic, setter=_setState:) int state; // @dynamic state;
@property(nonatomic) unsigned long long frameLimit; // @dynamic frameLimit;
@property(nonatomic) unsigned long long triggerFrame; // @dynamic triggerFrame;
- (void)setTargetQueue:(struct dispatch_queue_s *)arg1;
- (void)dealloc;
- (id)initWithCaptureArchive:(id)arg1;
- (id)init;

@end

