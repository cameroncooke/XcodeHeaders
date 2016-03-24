//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEStream.h>

@class NSOperation, NSOperationQueue;

@interface _IDEStreamMap : IDEStream
{
    id <IDEStreamPublisher> _publisher;
    CDUnknownBlockType _work;
    NSOperationQueue *_inQueue;
    NSOperation *_previousInOperation;
    NSOperationQueue *_outQueue;
    NSOperation *_previousOutOperation;
}

+ (id)withPublisher:(id)arg1 withWork:(CDUnknownBlockType)arg2;
@property(retain) NSOperation *previousOutOperation; // @synthesize previousOutOperation=_previousOutOperation;
@property(retain) NSOperationQueue *outQueue; // @synthesize outQueue=_outQueue;
@property(retain) NSOperation *previousInOperation; // @synthesize previousInOperation=_previousInOperation;
@property(retain) NSOperationQueue *inQueue; // @synthesize inQueue=_inQueue;
@property(copy) CDUnknownBlockType work; // @synthesize work=_work;
@property(retain) id <IDEStreamPublisher> publisher; // @synthesize publisher=_publisher;
- (void).cxx_destruct;
- (void)onCancelled;
- (void)onCompleted;
- (void)onNext:(id)arg1;
- (void)cancel;
- (void)subscribeConsumer:(id)arg1;
- (id)init;

@end
