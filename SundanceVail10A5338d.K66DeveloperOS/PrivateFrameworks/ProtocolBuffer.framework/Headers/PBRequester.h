/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library
#import "NSURLConnectionDelegate.h"
#import "ProtocolBuffer-Structs.h"

@class NSMutableData, NSURL, NSURLConnection, NSMutableArray, NSDictionary, NSMutableDictionary, PBDataReader, NSString, NSArray;
@protocol PBRequesterDelegate;

@interface PBRequester : NSObject <NSURLConnectionDelegate> {
	NSURL *_URL;	// 4 = 0x4
	id<PBRequesterDelegate> _delegate;	// 8 = 0x8
	NSURLConnection *_connection;	// 12 = 0xc
	NSMutableData *_data;	// 16 = 0x10
	PBDataReader *_dataReader;	// 20 = 0x14
	unsigned _lastGoodDataOffset;	// 24 = 0x18
	unsigned _uploadPayloadSize;	// 28 = 0x1c
	unsigned _downloadPayloadSize;	// 32 = 0x20
	unsigned long long _timeRequestSent;	// 36 = 0x24
	unsigned long long _timeResponseReceived;	// 44 = 0x2c
	int _responseStatusCode;	// 52 = 0x34
	NSMutableArray *_requests;	// 56 = 0x38
	NSMutableArray *_responses;	// 60 = 0x3c
	NSMutableArray *_internalRequests;	// 64 = 0x40
	NSMutableArray *_internalResponses;	// 68 = 0x44
	NSDictionary *_httpResponseHeaders;	// 72 = 0x48
	NSMutableDictionary *_httpRequestHeaders;	// 76 = 0x4c
	double _timeoutSeconds;	// 80 = 0x50
	CFRunLoopTimerRef _timeoutTimer;	// 88 = 0x58
	NSString *_logRequestToFile;	// 92 = 0x5c
	NSString *_logResponseToFile;	// 96 = 0x60
	BOOL _didNotifyRequestCompleted;	// 100 = 0x64
	NSArray *_clientCertificates;	// 104 = 0x68
	BOOL _shouldHandleCookies;	// 108 = 0x6c
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	} _flags;	// 109 = 0x6d
}
@property(retain, nonatomic) NSURL *URL;	// G=0x3387e461; S=0x3387e471; @synthesize=_URL
@property(retain, nonatomic) NSArray *clientCertificates;	// G=0x3387e55d; S=0x3387e56d; @synthesize=_clientCertificates
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x3387e491; S=0x3387e4a1; @synthesize=_connection
@property(assign, nonatomic) id delegate;	// G=0x3387e481; S=0x3387bf09; @synthesize=_delegate
@property(readonly, assign, nonatomic) unsigned downloadPayloadSize;	// G=0x3387e54d; @synthesize=_downloadPayloadSize
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;	// G=0x3387c251; S=0x3387c261; 
@property(retain, nonatomic) NSDictionary *httpResponseHeaders;	// G=0x3387e4b1; S=0x3387e4c1; @synthesize=_httpResponseHeaders
@property(assign, nonatomic) BOOL ignoresResponse;	// G=0x3387bed1; S=0x3387bee5; 
@property(readonly, retain) NSMutableArray *internalRequests;	// G=0x3387c13d; converted property
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x3387e4fd; S=0x3387e50d; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x3387e51d; S=0x3387e52d; @synthesize=_logResponseToFile
@property(assign) BOOL needsCancel;	// G=0x3387bfe1; S=0x3387bff5; 
@property(readonly, assign, nonatomic) unsigned requestResponseTime;	// G=0x3387e19d; 
@property(readonly, assign, nonatomic) NSArray *requests;	// G=0x3387c02d; 
@property(assign, nonatomic) BOOL shouldHandleCookies;	// G=0x3387e57d; S=0x3387e58d; @synthesize=_shouldHandleCookies
@property(assign, nonatomic) double timeoutSeconds;	// G=0x3387e4d1; S=0x3387e4e9; @synthesize=_timeoutSeconds
@property(readonly, assign, nonatomic) unsigned uploadPayloadSize;	// G=0x3387e53d; @synthesize=_uploadPayloadSize
+ (BOOL)usesEncodedMessages;	// 0x3387e3a1
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x3387bc11
// declared property getter: - (id)URL;	// 0x3387e461
- (id)_applicationID;	// 0x3387c409
- (void)_cancelNoNotify;	// 0x3387cf69
- (void)_cancelWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x3387d2bd
- (void)_cleanup;	// 0x3387bdf9
- (void)_failWithError:(id)error;	// 0x3387d1f9
- (void)_failWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x3387d24d
- (id)_languageLocale;	// 0x3387c325
- (id)_osVersion;	// 0x3387c43d
- (void)_removeTimeoutTimer;	// 0x3387e2d5
- (void)_resetTimeoutTimer;	// 0x3387e301
- (void)_sendPayload:(id)payload;	// 0x3387c739
- (void)_startTimeoutTimer;	// 0x3387e221
- (void)_timeoutTimerFired;	// 0x3387e349
- (BOOL)_tryParseData;	// 0x3387d459
- (void)addInternalRequest:(id)request;	// 0x3387c14d
- (void)addRequest:(id)request;	// 0x3387c03d
- (void)cancel;	// 0x3387cfd9
- (void)cancelWithErrorCode:(int)errorCode;	// 0x3387d349
// declared property getter: - (id)clientCertificates;	// 0x3387e55d
// declared property getter: - (id)connection;	// 0x3387e491
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3387e109
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3387da1d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3387d821
- (void)connectionDidFinishLoading:(id)connection;	// 0x3387dc71
- (void)dealloc;	// 0x3387bc95
- (id)decodeResponseData:(id)data;	// 0x3387e3b1
// declared property getter: - (id)delegate;	// 0x3387e481
// declared property getter: - (unsigned)downloadPayloadSize;	// 0x3387e54d
- (void)encodeRequestData:(id)data startRequestCallback:(id)callback;	// 0x3387e3a5
- (void)handleResponse:(id)response forInternalRequest:(id)internalRequest;	// 0x3387c24d
// declared property getter: - (id)httpRequestHeaders;	// 0x3387c251
// declared property getter: - (id)httpResponseHeaders;	// 0x3387e4b1
// declared property getter: - (BOOL)ignoresResponse;	// 0x3387bed1
// converted property getter: - (id)internalRequests;	// 0x3387c13d
- (BOOL)isPaused;	// 0x3387d199
// declared property getter: - (id)logRequestToFile;	// 0x3387e4fd
// declared property getter: - (id)logResponseToFile;	// 0x3387e51d
// declared property getter: - (BOOL)needsCancel;	// 0x3387bfe1
- (CFURLRequestRef)newCFMutableURLRequestWithURL:(id)url;	// 0x3387e3b9
- (id)newConnectionWithCFURLRequest:(CFURLRequestRef)cfurlrequest delegate:(id)delegate;	// 0x3387e3e9
- (void)pause;	// 0x3387d045
- (BOOL)readResponsePreamble:(id)preamble;	// 0x3387d375
- (id)requestPreamble;	// 0x3387c4f5
// declared property getter: - (unsigned)requestResponseTime;	// 0x3387e19d
// declared property getter: - (id)requests;	// 0x3387c02d
- (id)responseForInternalRequest:(id)internalRequest;	// 0x3387c1c1
- (id)responseForRequest:(id)request;	// 0x3387c0b1
- (void)resume;	// 0x3387d1ad
// declared property setter: - (void)setClientCertificates:(id)certificates;	// 0x3387e56d
// declared property setter: - (void)setConnection:(id)connection;	// 0x3387e4a1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3387bf09
- (void)setHttpRequestHeader:(id)header forKey:(id)key;	// 0x3387c2a5
// declared property setter: - (void)setHttpRequestHeaders:(id)headers;	// 0x3387c261
// declared property setter: - (void)setHttpResponseHeaders:(id)headers;	// 0x3387e4c1
// declared property setter: - (void)setIgnoresResponse:(BOOL)response;	// 0x3387bee5
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x3387e50d
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x3387e52d
- (void)setNeedsCancel;	// 0x3387c019
// declared property setter: - (void)setNeedsCancel:(BOOL)cancel;	// 0x3387bff5
// declared property setter: - (void)setShouldHandleCookies:(BOOL)handleCookies;	// 0x3387e58d
// declared property setter: - (void)setTimeoutSeconds:(double)seconds;	// 0x3387e4e9
// declared property setter: - (void)setURL:(id)url;	// 0x3387e471
// declared property getter: - (BOOL)shouldHandleCookies;	// 0x3387e57d
- (void)start;	// 0x3387cac9
// declared property getter: - (double)timeoutSeconds;	// 0x3387e4d1
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;	// 0x3387d3d1
// declared property getter: - (unsigned)uploadPayloadSize;	// 0x3387e53d
- (void)writeRequest:(id)request into:(id)into;	// 0x3387c689
@end
