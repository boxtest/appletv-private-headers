/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class SKPaymentTransaction, NSError, NSString, NSURL, NSNumber;

@interface SKDownload : NSObject {
	NSString *_contentIdentifier;	// 4 = 0x4
	long long _contentLength;	// 8 = 0x8
	NSURL *_contentURL;	// 16 = 0x10
	NSNumber *_downloadID;	// 20 = 0x14
	int _downloadState;	// 24 = 0x18
	NSError *_error;	// 28 = 0x1c
	float _progress;	// 32 = 0x20
	double _timeRemaining;	// 36 = 0x24
	SKPaymentTransaction *_transaction;	// 44 = 0x2c
	NSString *_version;	// 48 = 0x30
}
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;	// G=0x35f8f8f1; S=0x35f8f905; @synthesize
@property(readonly, assign, nonatomic) NSString *contentIdentifier;	// G=0x35f8f8a9; @synthesize=_contentIdentifier
@property(readonly, assign, nonatomic) long long contentLength;	// G=0x35f8f8b9; @synthesize=_contentLength
@property(readonly, assign, nonatomic) NSURL *contentURL;	// G=0x35f8f8d1; @synthesize=_contentURL
@property(readonly, assign, nonatomic) NSString *contentVersion;	// G=0x35f8f8e1; @synthesize=_version
@property(readonly, assign, nonatomic) int downloadState;	// G=0x35f8f915; @synthesize=_downloadState
@property(readonly, assign, nonatomic) NSError *error;	// G=0x35f8f925; @synthesize=_error
@property(readonly, assign, nonatomic) float progress;	// G=0x35f8f935; @synthesize=_progress
@property(readonly, assign, nonatomic) double timeRemaining;	// G=0x35f8f945; @synthesize=_timeRemaining
@property(readonly, assign, nonatomic) SKPaymentTransaction *transaction;	// G=0x35f8f95d; @synthesize=_transaction
- (id)init;	// 0x35f8f109
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x35f8f4d1
- (void)_applyChangeset:(id)changeset;	// 0x35f8f1e5
// declared property getter: - (id)_downloadID;	// 0x35f8f8f1
- (void)_setContentIdentifier:(id)identifier;	// 0x35f8f329
- (void)_setContentLength:(long long)length;	// 0x35f8f36d
- (void)_setContentURL:(id)url;	// 0x35f8f381
// declared property setter: - (void)_setDownloadID:(id)anId;	// 0x35f8f905
- (void)_setDownloadState:(int)state;	// 0x35f8f3c5
- (void)_setError:(id)error;	// 0x35f8f3d5
- (void)_setProgress:(float)progress;	// 0x35f8f419
- (void)_setTimeRemaining:(double)remaining;	// 0x35f8f429
- (void)_setTransaction:(id)transaction;	// 0x35f8f43d
- (void)_setVersion:(id)version;	// 0x35f8f48d
// declared property getter: - (id)contentIdentifier;	// 0x35f8f8a9
// declared property getter: - (long long)contentLength;	// 0x35f8f8b9
// declared property getter: - (id)contentURL;	// 0x35f8f8d1
// declared property getter: - (id)contentVersion;	// 0x35f8f8e1
- (id)copyXPCEncoding;	// 0x35f8f771
- (void)dealloc;	// 0x35f8f159
// declared property getter: - (int)downloadState;	// 0x35f8f915
// declared property getter: - (id)error;	// 0x35f8f925
// declared property getter: - (float)progress;	// 0x35f8f935
// declared property getter: - (double)timeRemaining;	// 0x35f8f945
// declared property getter: - (id)transaction;	// 0x35f8f95d
@end

