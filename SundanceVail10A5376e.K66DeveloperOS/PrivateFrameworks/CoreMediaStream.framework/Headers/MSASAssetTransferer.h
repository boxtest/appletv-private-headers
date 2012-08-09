/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "MMCSEngineDelegate.h"

@class MSAlbumSharingDaemon, MMCSEngine, MSBackoffManager, NSString, MSASPersonModel;
@protocol OS_dispatch_queue;

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate> {
	id _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	MMCSEngine *_engine;	// 12 = 0xc
	double _maxMMCSTokenValidityTimeInterval;	// 16 = 0x10
	MSAlbumSharingDaemon *_daemon;	// 24 = 0x18
	MSASPersonModel *_model;	// 28 = 0x1c
	MSBackoffManager *_backoffManager;	// 32 = 0x20
	int _maxBatchCount;	// 36 = 0x24
	int _maxRetryCount;	// 40 = 0x28
	NSString *_focusAlbumGUID;	// 44 = 0x2c
	NSString *_focusAssetCollectionGUID;	// 48 = 0x30
	NSObject<OS_dispatch_queue> *_workQueue;	// 52 = 0x34
	NSObject<OS_dispatch_queue> *_eventQueue;	// 56 = 0x38
	BOOL _hasShutDown;	// 60 = 0x3c
}
@property(assign, nonatomic) __weak MSBackoffManager *backoffManager;	// G=0x316f97cd; S=0x316f97ed; @synthesize=_backoffManager
@property(assign, nonatomic) __weak MSAlbumSharingDaemon *daemon;	// G=0x316f9765; S=0x316f9785; @synthesize=_daemon
@property(assign, nonatomic) __weak id delegate;	// G=0x316f96e5; S=0x316f9705; @synthesize=_delegate
@property(readonly, assign, nonatomic) MMCSEngine *engine;	// G=0x316f973d; @synthesize=_engine
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;	// G=0x316f98a1; S=0x316f98b1; @synthesize=_eventQueue
@property(copy, nonatomic) NSString *focusAlbumGUID;	// G=0x316f9841; S=0x316f87b1; @synthesize=_focusAlbumGUID
@property(copy, nonatomic) NSString *focusAssetCollectionGUID;	// G=0x316f9855; S=0x316f889d; @synthesize=_focusAssetCollectionGUID
@property(assign, nonatomic) BOOL hasShutDown;	// G=0x316f98d9; S=0x316f98e9; @synthesize=_hasShutDown
@property(assign, nonatomic) int maxBatchCount;	// G=0x316f9801; S=0x316f9811; @synthesize=_maxBatchCount
@property(assign, nonatomic) double maxMMCSTokenValidityTimeInterval;	// G=0x316f974d; S=0x316f8989; @synthesize=_maxMMCSTokenValidityTimeInterval
@property(assign, nonatomic) int maxRetryCount;	// G=0x316f9821; S=0x316f9831; @synthesize=_maxRetryCount
@property(assign, nonatomic) __weak MSASPersonModel *model;	// G=0x316f9799; S=0x316f97b9; @synthesize=_model
@property(copy, nonatomic) NSString *personID;	// G=0x316f9719; S=0x316f972d; @synthesize=_personID
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x316f9869; S=0x316f9879; @synthesize=_workQueue
- (id)initWithPersonID:(id)personID;	// 0x316f825d
- (id)initWithPersonID:(id)personID eventQueue:(id)queue;	// 0x316f8285
- (void).cxx_destruct;	// 0x316f98f9
- (void)MMCSEngine:(id)engine didFinishGettingAllAssetsContext:(id)context;	// 0x316f9611
- (void)MMCSEngine:(id)engine didFinishGettingAsset:(id)asset path:(id)path context:(id)context error:(id)error;	// 0x316f9609
- (void)MMCSEngine:(id)engine didFinishPuttingAllAssetsContext:(id)context;	// 0x316f9605
- (void)MMCSEngine:(id)engine didFinishPuttingAsset:(id)asset context:(id)context putReceipt:(id)receipt error:(id)error;	// 0x316f95fd
- (void)MMCSEngine:(id)engine didMakeGetProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x316f960d
- (void)MMCSEngine:(id)engine didMakePutProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x316f9601
- (void)MMCSEngine:(id)engine logMessage:(id)message logLevel:(int)level;	// 0x316f9649
- (void)MMCSEngine:(id)engine logPerformanceMetrics:(id)metrics;	// 0x316f96c1
- (BOOL)MMCSEngine:(id)engine shouldLogAtLogLevel:(int)logLevel;	// 0x316f9615
- (id)_MMCSTokenTooOldError;	// 0x316f9381
- (id)_canceledError;	// 0x316f9451
- (id)_missingMMCSTokenError;	// 0x316f92b1
- (id)_missingURLError;	// 0x316f91e5
- (id)_pathForPersonID:(id)personID;	// 0x316f91b5
- (void)_rereadPerformanceLoggingSetting;	// 0x316f81cd
- (void)_sendDidIdleNotification;	// 0x316f9521
// declared property getter: - (id)backoffManager;	// 0x316f97cd
- (void)cancelCompletionBlock:(id)block;	// 0x316f8b91
// declared property getter: - (id)daemon;	// 0x316f9765
- (void)dealloc;	// 0x316f8785
// declared property getter: - (id)delegate;	// 0x316f96e5
// declared property getter: - (id)engine;	// 0x316f973d
// declared property getter: - (id)eventQueue;	// 0x316f98a1
// declared property getter: - (id)focusAlbumGUID;	// 0x316f9841
// declared property getter: - (id)focusAssetCollectionGUID;	// 0x316f9855
// declared property getter: - (BOOL)hasShutDown;	// 0x316f98d9
// declared property getter: - (int)maxBatchCount;	// 0x316f9801
// declared property getter: - (double)maxMMCSTokenValidityTimeInterval;	// 0x316f974d
// declared property getter: - (int)maxRetryCount;	// 0x316f9821
// declared property getter: - (id)model;	// 0x316f9799
// declared property getter: - (id)personID;	// 0x316f9719
- (void)retryOutstandingActivities;	// 0x316f90bd
// declared property setter: - (void)setBackoffManager:(id)manager;	// 0x316f97ed
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x316f9785
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x316f9705
// declared property setter: - (void)setEventQueue:(id)queue;	// 0x316f98b1
// declared property setter: - (void)setFocusAlbumGUID:(id)guid;	// 0x316f87b1
// declared property setter: - (void)setFocusAssetCollectionGUID:(id)guid;	// 0x316f889d
// declared property setter: - (void)setHasShutDown:(BOOL)down;	// 0x316f98e9
// declared property setter: - (void)setMaxBatchCount:(int)count;	// 0x316f9811
// declared property setter: - (void)setMaxMMCSTokenValidityTimeInterval:(double)interval;	// 0x316f8989
// declared property setter: - (void)setMaxRetryCount:(int)count;	// 0x316f9831
// declared property setter: - (void)setModel:(id)model;	// 0x316f97b9
// declared property setter: - (void)setPersonID:(id)anId;	// 0x316f972d
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x316f9879
- (void)shutDownCompletionBlock:(id)block;	// 0x316f8cbd
- (void)stopCompletionBlock:(id)block;	// 0x316f8a49
// declared property getter: - (id)workQueue;	// 0x316f9869
- (void)workQueueCancel;	// 0x316f8cb9
- (double)workQueueMaxMMCSTokenValidityTimeInterval;	// 0x316f919d
- (unsigned long long)workQueueNextItemID;	// 0x316f915d
- (void)workQueueRetryOutstandingActivities;	// 0x316f9159
- (void)workQueueShutDownCompletionBlock:(id)block;	// 0x316f8e95
- (void)workQueueStop;	// 0x316f8b71
@end
