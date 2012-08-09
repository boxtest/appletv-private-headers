/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DASearchQuery.h"
#import "DataAccessExpress-Structs.h"

@class NSDate, NSString;

@interface DAMailboxSearchQuery : DASearchQuery {
	NSString *_collectionID;	// 32 = 0x20
	int _bodyType;	// 36 = 0x24
	long long _truncationSize;	// 40 = 0x28
	BOOL _allOrNone;	// 48 = 0x30
	NSDate *_priorToDate;	// 52 = 0x34
	int _MIMESupport;	// 56 = 0x38
	BOOL _deepTraversal;	// 60 = 0x3c
	BOOL _rebuildResults;	// 61 = 0x3d
}
@property(assign) int MIMESupport;	// G=0x338d308d; S=0x338d30a1; @synthesize=_MIMESupport
@property(assign) BOOL allOrNone;	// G=0x338d3039; S=0x338d3051; @synthesize=_allOrNone
@property(assign) int bodyType;	// G=0x338d2fa5; S=0x338d2fb9; @synthesize=_bodyType
@property(retain) NSString *collectionID;	// G=0x338d2f81; S=0x338d2f95; @synthesize=_collectionID
@property(assign) BOOL deepTraversal;	// G=0x338d30b9; S=0x338d30d1; @synthesize=_deepTraversal
@property(retain) NSDate *priorToDate;	// G=0x338d3069; S=0x338d307d; @synthesize=_priorToDate
@property(assign) BOOL rebuildResults;	// G=0x338d30e9; S=0x338d3101; @synthesize=_rebuildResults
@property(assign) long long truncationSize;	// G=0x338d2fd1; S=0x338d3005; @synthesize=_truncationSize
+ (id)mailboxSearchQueryWithSearchString:(id)searchString consumer:(id)consumer;	// 0x338d2a51
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x338d2bb1
- (id)initWithSearchString:(id)searchString consumer:(id)consumer;	// 0x338d2a9d
// declared property getter: - (int)MIMESupport;	// 0x338d308d
// declared property getter: - (BOOL)allOrNone;	// 0x338d3039
// declared property getter: - (int)bodyType;	// 0x338d2fa5
// declared property getter: - (id)collectionID;	// 0x338d2f81
- (void)dealloc;	// 0x338d2b4d
// declared property getter: - (BOOL)deepTraversal;	// 0x338d30b9
- (id)dictionaryRepresentation;	// 0x338d2d9d
// declared property getter: - (id)priorToDate;	// 0x338d3069
// declared property getter: - (BOOL)rebuildResults;	// 0x338d30e9
// declared property setter: - (void)setAllOrNone:(BOOL)none;	// 0x338d3051
// declared property setter: - (void)setBodyType:(int)type;	// 0x338d2fb9
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x338d2f95
// declared property setter: - (void)setDeepTraversal:(BOOL)traversal;	// 0x338d30d1
// declared property setter: - (void)setMIMESupport:(int)support;	// 0x338d30a1
// declared property setter: - (void)setPriorToDate:(id)date;	// 0x338d307d
// declared property setter: - (void)setRebuildResults:(BOOL)results;	// 0x338d3101
// declared property setter: - (void)setTruncationSize:(long long)size;	// 0x338d3005
// declared property getter: - (long long)truncationSize;	// 0x338d2fd1
@end
