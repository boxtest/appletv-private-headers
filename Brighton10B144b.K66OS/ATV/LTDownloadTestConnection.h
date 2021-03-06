/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRDownload.h"

@class NSMutableArray, NSDictionary, NSString, NSURLConnection, NSHTTPURLResponse, NSTimer;
@protocol LTNetworkTestDownloadDelegate;

__attribute__((visibility("hidden")))
@interface LTDownloadTestConnection : XXUnknownSuperclass <BRDownload> {
	double _startTime;	// 4 = 0x4
	double _receivedResponseTime;	// 12 = 0xc
	double _elapsedTime;	// 20 = 0x14
	unsigned _lastMarkedLength;	// 28 = 0x1c
	double _cachedMeasuredBandwidth;	// 32 = 0x20
	double _endTime;	// 40 = 0x28
	NSTimer *_measuringTimer;	// 48 = 0x30
	NSString *_urlString;	// 52 = 0x34
	NSDictionary *_options;	// 56 = 0x38
	NSURLConnection *_urlConnection;	// 60 = 0x3c
	unsigned _fetchedDataLength;	// 64 = 0x40
	NSHTTPURLResponse *_urlResponse;	// 68 = 0x44
	NSMutableArray *_progressArray;	// 72 = 0x48
	int _downloadState;	// 76 = 0x4c
	int _downloadContext;	// 80 = 0x50
	id<LTNetworkTestDownloadDelegate> _delegate;	// 84 = 0x54
	int _downloadCapTime;	// 88 = 0x58
	long _downloadCapBytes;	// 92 = 0x5c
}
@property(assign) id delegate;	// G=0x473e5; S=0x473d1; converted property
@property(readonly, assign) int downloadState;	// G=0x47ce1; converted property
@property(readonly, assign) double elapsedTime;	// G=0x4737d; converted property
@property(readonly, assign) unsigned fetchedDataLength;	// G=0x47395; converted property
@property(readonly, retain) NSDictionary *options;	// G=0x47ab5; converted property
@property(readonly, assign) double startTime;	// G=0x47365; converted property
- (id)init;	// 0x471ad
- (id)initWithURLString:(id)urlstring;	// 0x471dd
- (id)initWithURLString:(id)urlstring andOptions:(id)options;	// 0x47205
- (void).cxx_destruct;	// 0x47d59
- (unsigned long long)byteCount;	// 0x47d29
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x47c69
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x47b69
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x47af5
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x47cdd
- (void)connectionDidFinishLoading:(id)connection;	// 0x47b95
- (id)contentType;	// 0x47a6d
- (void)dealloc;	// 0x47151
// converted property getter: - (id)delegate;	// 0x473e5
// converted property getter: - (int)downloadState;	// 0x47ce1
- (int)downloadStateContext;	// 0x47d01
// converted property getter: - (double)elapsedTime;	// 0x4737d
- (unsigned)expectedContentLength;	// 0x473a5
- (unsigned long long)expectedSize;	// 0x47d11
// converted property getter: - (unsigned)fetchedDataLength;	// 0x47395
- (void)markProgress;	// 0x477b9
- (double)measuredBytesPerSecond;	// 0x47add
// converted property getter: - (id)options;	// 0x47ab5
- (id)originalURLString;	// 0x47ac9
- (void)pause;	// 0x47d4d
- (id)progressLogs;	// 0x47a8d
- (int)qualifiedDownloadState;	// 0x47cf1
- (id)response;	// 0x47aa1
- (void)resume;	// 0x47d51
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x473d1
- (void)setDownloadCapBytes:(long)bytes;	// 0x47409
- (void)setDownloadCapTime:(int)time;	// 0x473f9
- (void)setPlayable:(BOOL)playable;	// 0x47d49
- (void)startConnection;	// 0x47419
// converted property getter: - (double)startTime;	// 0x47365
- (void)stopConnection;	// 0x47745
- (BOOL)testContent;	// 0x47d55
- (double)timeUntilPlayable;	// 0x47d3d
@end

