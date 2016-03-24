//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTServicesRequest.h"

#import "NSURLSessionDelegate.h"

@class NSString;

@interface DVTAnalyticsRequest : DVTServicesRequest <NSURLSessionDelegate>
{
    NSString *_endpoint;
    NSString *_query;
}

+ (id)requestWithSession:(id)arg1 endpoint:(id)arg2 query:(id)arg3;
+ (void)initialize;
@property(readonly) NSString *query; // @synthesize query=_query;
@property(readonly) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)responseBySendingRequestWithError:(id *)arg1;
- (id)_urlSessionConfiguration;
- (id)_additionalHTTPHeaders;
- (id)_credentials;
- (id)requestURL;
- (id)_analyticsAPIVersion;
- (id)_analyticsServiceHostname;
- (id)initWithSession:(id)arg1 endpoint:(id)arg2 query:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
