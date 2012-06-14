/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURL;

@interface NSFileCoordinator : NSObject {
@private
	id _accessArbiter;	// 4 = 0x4
	id _fileReactor;	// 8 = 0x8
	id _purposeID;	// 12 = 0xc
	NSURL *_recentFilePresenterURL;	// 16 = 0x10
	id _accessClaimIDOrIDs;	// 20 = 0x14
	BOOL _isCancelled;	// 24 = 0x18
	id _reserved;	// 28 = 0x1c
}
@property(retain) id purposeIdentifier;	// G=0x3111dcc5; S=0x3111dc81; converted property
+ (void)__itemAtURL:(id)url didGainVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x3111d875
+ (void)__itemAtURL:(id)url didLoseVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x3111d961
+ (void)__itemAtURL:(id)url didMoveToURL:(id)url2 purposeID:(id)anId;	// 0x3111d791
+ (void)__itemAtURL:(id)url didResolveConflictVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x3111da4d
+ (void)_addFileProvider:(id)provider;	// 0x3111db39
+ (id)_canonicalURLForURL:(id)url;	// 0x31119e51
+ (id)_fileProviders;	// 0x3111dbc1
+ (void)_removeFileProvider:(id)provider;	// 0x3111db7d
+ (BOOL)_skipCoordinationWork;	// 0x3111aba5
+ (void)addFilePresenter:(id)presenter;	// 0x31119ba5
+ (id)filePresenters;	// 0x31119c2d
+ (void)removeFilePresenter:(id)presenter;	// 0x31119be9
- (id)init;	// 0x31119c6d
- (id)initWithFilePresenter:(id)filePresenter;	// 0x31119c81
- (void)__coordinateReadingItemAtURL:(id)url options:(unsigned)options purposeID:(id)anId byAccessor:(id)accessor;	// 0x3111c581
- (void)__coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 purposeID:(id)anId byAccessor:(id)accessor;	// 0x3111cc49
- (void)__coordinateWritingItemAtURL:(id)url options:(unsigned)options purposeID:(id)anId byAccessor:(id)accessor;	// 0x3111c8e5
- (void)__coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 purposeID:(id)anId byAccessor:(id)accessor;	// 0x3111cff9
- (void)__prepareForReadingItemsAtURLs:(id)urls options:(unsigned)options writingItemsAtURLs:(id)urls3 options:(unsigned)options4 byAccessor:(id)accessor;	// 0x3111d3a9
- (void)_blockOnAccessClaim:(id)claim;	// 0x3111aeb9
- (void)_coordinateReadingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x3111b2c1
- (void)_coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x3111baf1
- (void)_coordinateWritingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x3111b6d9
- (void)_coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x3111bfc5
- (void)_forgetAccessClaimForID:(id)anId;	// 0x3111aded
- (void)_invokeAccessor:(id)accessor orDont:(BOOL)dont thenRelinquishAccessClaimForID:(id)anId;	// 0x3111b0c9
- (void)_itemAtURL:(id)url didMoveToURL:(id)url2;	// 0x3111c499
- (void)_requestAccessClaim:(id)claim withProcedure:(id)procedure;	// 0x3111ac3d
- (void)_setFileProvider:(id)provider;	// 0x3111dc01
- (void)cancel;	// 0x3111aa5d
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x31119e55
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x3111a205
- (void)coordinateWritingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x3111a02d
- (void)coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x3111a3f1
- (void)dealloc;	// 0x31119db5
- (void)itemAtURL:(id)url didMoveToURL:(id)url2;	// 0x3111a9d1
- (void)prepareForReadingItemsAtURLs:(id)urls options:(unsigned)options writingItemsAtURLs:(id)urls3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x3111a5dd
// converted property getter: - (id)purposeIdentifier;	// 0x3111dcc5
// converted property setter: - (void)setPurposeIdentifier:(id)identifier;	// 0x3111dc81
@end
