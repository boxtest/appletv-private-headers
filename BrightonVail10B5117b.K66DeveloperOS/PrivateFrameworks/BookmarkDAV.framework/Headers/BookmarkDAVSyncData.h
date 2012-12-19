/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSNumber, NSDictionary, NSURL;

@interface BookmarkDAVSyncData : NSObject {
	void *_db;	// 4 = 0x4
	NSMutableDictionary *_backingDict;	// 8 = 0x8
	BOOL _hasChanges;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *accountPrsId;	// G=0x337046e1; S=0x33704709; 
@property(retain, nonatomic) NSString *bookmarksBarId;	// G=0x33704321; S=0x33704349; 
@property(assign, nonatomic) unsigned bookmarksBarOrder;	// G=0x33704459; S=0x337044b5; 
@property(retain, nonatomic) NSString *bookmarksMenuId;	// G=0x337043bd; S=0x337043e5; 
@property(assign, nonatomic) unsigned bookmarksMenuOrder;	// G=0x33704531; S=0x3370458d; 
@property(retain, nonatomic) NSDictionary *bulkRequests;	// G=0x33704259; S=0x33704281; 
@property(assign, nonatomic) unsigned clientVersion;	// G=0x33704609; S=0x33704665; 
@property(retain, nonatomic) NSString *ctag;	// G=0x33703e71; S=0x33703e99; 
@property(retain, nonatomic) NSString *etag;	// G=0x33704001; S=0x33704029; 
@property(readonly, assign) BOOL hasChanges;	// G=0x33704add; @synthesize=_hasChanges
@property(assign, nonatomic) BOOL hasHitQuotaLimit;	// G=0x3370493d; S=0x3370497d; 
@property(retain, nonatomic) NSDictionary *heldAsideOrderings;	// G=0x337048b9; S=0x337048e1; 
@property(retain, nonatomic) NSURL *homeURL;	// G=0x33703ae9; S=0x33703b3d; 
@property(assign, nonatomic) BOOL initialSyncDone;	// G=0x33703bf9; S=0x33703c39; 
@property(retain, nonatomic) NSNumber *knownQuotaRemaining;	// G=0x33704a15; S=0x33704a3d; 
@property(retain, nonatomic) NSURL *principalURL;	// G=0x337047a9; S=0x337047fd; 
@property(retain, nonatomic) NSString *ptag;	// G=0x33703f39; S=0x33703f61; 
@property(retain, nonatomic) NSString *pushKey;	// G=0x33703da9; S=0x33703dd1; 
@property(retain, nonatomic) NSDictionary *pushTransports;	// G=0x33704191; S=0x337041b9; 
@property(assign, nonatomic) BOOL supportsSyncCollection;	// G=0x33703cd1; S=0x33703d11; 
@property(retain, nonatomic) NSString *syncToken;	// G=0x337040c9; S=0x337040f1; 
- (id)initWithBookmarkDatabase:(void *)bookmarkDatabase;	// 0x33703931
// declared property getter: - (id)accountPrsId;	// 0x337046e1
// declared property getter: - (id)bookmarksBarId;	// 0x33704321
// declared property getter: - (unsigned)bookmarksBarOrder;	// 0x33704459
// declared property getter: - (id)bookmarksMenuId;	// 0x337043bd
// declared property getter: - (unsigned)bookmarksMenuOrder;	// 0x33704531
// declared property getter: - (id)bulkRequests;	// 0x33704259
// declared property getter: - (unsigned)clientVersion;	// 0x33704609
// declared property getter: - (id)ctag;	// 0x33703e71
- (void)dealloc;	// 0x33703a25
// declared property getter: - (id)etag;	// 0x33704001
// declared property getter: - (BOOL)hasChanges;	// 0x33704add
// declared property getter: - (BOOL)hasHitQuotaLimit;	// 0x3370493d
// declared property getter: - (id)heldAsideOrderings;	// 0x337048b9
// declared property getter: - (id)homeURL;	// 0x33703ae9
// declared property getter: - (BOOL)initialSyncDone;	// 0x33703bf9
// declared property getter: - (id)knownQuotaRemaining;	// 0x33704a15
// declared property getter: - (id)principalURL;	// 0x337047a9
// declared property getter: - (id)ptag;	// 0x33703f39
// declared property getter: - (id)pushKey;	// 0x33703da9
// declared property getter: - (id)pushTransports;	// 0x33704191
// declared property setter: - (void)setAccountPrsId:(id)anId;	// 0x33704709
// declared property setter: - (void)setBookmarksBarId:(id)anId;	// 0x33704349
// declared property setter: - (void)setBookmarksBarOrder:(unsigned)order;	// 0x337044b5
// declared property setter: - (void)setBookmarksMenuId:(id)anId;	// 0x337043e5
// declared property setter: - (void)setBookmarksMenuOrder:(unsigned)order;	// 0x3370458d
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x33704281
// declared property setter: - (void)setClientVersion:(unsigned)version;	// 0x33704665
// declared property setter: - (void)setCtag:(id)ctag;	// 0x33703e99
// declared property setter: - (void)setEtag:(id)etag;	// 0x33704029
// declared property setter: - (void)setHasHitQuotaLimit:(BOOL)limit;	// 0x3370497d
// declared property setter: - (void)setHeldAsideOrderings:(id)orderings;	// 0x337048e1
// declared property setter: - (void)setHomeURL:(id)url;	// 0x33703b3d
// declared property setter: - (void)setInitialSyncDone:(BOOL)done;	// 0x33703c39
// declared property setter: - (void)setKnownQuotaRemaining:(id)remaining;	// 0x33704a3d
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x337047fd
// declared property setter: - (void)setPtag:(id)ptag;	// 0x33703f61
// declared property setter: - (void)setPushKey:(id)key;	// 0x33703dd1
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x337041b9
// declared property setter: - (void)setSupportsSyncCollection:(BOOL)collection;	// 0x33703d11
// declared property setter: - (void)setSyncToken:(id)token;	// 0x337040f1
// declared property getter: - (BOOL)supportsSyncCollection;	// 0x33703cd1
// declared property getter: - (id)syncToken;	// 0x337040c9
- (void)writeToBookmarkDB;	// 0x33703a89
@end
