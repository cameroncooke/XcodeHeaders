//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTLayerImageExporter, NSObject<OS_dispatch_queue>;

@interface DBGExporterAndQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    DVTLayerImageExporter *_exporter;
}

@property(retain) DVTLayerImageExporter *exporter; // @synthesize exporter=_exporter;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;

@end

