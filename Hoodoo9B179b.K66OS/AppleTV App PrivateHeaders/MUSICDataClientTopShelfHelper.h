/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTVAPPBinary-Structs.h"
#import "MUSICDataClientTopShelfHelper.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface MUSICDataClientTopShelfHelper : XXUnknownSuperclass {
	ATVMediaQueryRef _dateAddedQuery;	// 4 = 0x4
	ATVMediaQueryRef _datePlayedQuery;	// 8 = 0x8
	ATVMediaQueryRef _albumQuery;	// 12 = 0xc
	BOOL _queryResultsParseable;	// 16 = 0x10
	ATVMediaTypeRef _mediaType;	// 20 = 0x14
	long _numOfRentals;	// 24 = 0x18
	id _queryCompletionHandler;	// 28 = 0x1c
	id _albumQueryCompletionHandler;	// 32 = 0x20
}
@property(copy, nonatomic) id _albumQueryCompletionHandler;	// G=0x68e15; S=0x68e25; @synthesize
@property(copy, nonatomic) id _queryCompletionHandler;	// G=0x68de1; S=0x68df1; @synthesize
@property(readonly, assign, nonatomic) long numOfRentals;	// G=0x68dd1; @synthesize=_numOfRentals
- (void).cxx_destruct;	// 0x68e49
// declared property getter: - (id)_albumQueryCompletionHandler;	// 0x68e15
// declared property getter: - (id)_queryCompletionHandler;	// 0x68de1
- (void)dealloc;	// 0x68bb1
// declared property getter: - (long)numOfRentals;	// 0x68dd1
- (void)queryAlbumWithAlbumID:(id)albumID dataClient:(ATVDataClientRef)client completionHandler:(id)handler;	// 0x68ced
- (void)queryDataWithMediaType:(ATVMediaTypeRef)mediaType dataClient:(ATVDataClientRef)client completionHandler:(id)handler;	// 0x68c31
// declared property setter: - (void)set_albumQueryCompletionHandler:(id)handler;	// 0x68e25
// declared property setter: - (void)set_queryCompletionHandler:(id)handler;	// 0x68df1
@end

@interface MUSICDataClientTopShelfHelper (ATVDataClient)
- (void)_albumQueryComplete;	// 0x69915
- (void)_cancelQueries;	// 0x6997d
- (ATVMediaQueryRef)_createBaseQuery:(ATVMediaTypeRef)query;	// 0x68e7d
- (void)_itemsQueryComplete;	// 0x692e9
- (void)_submitHomeShareDateAddedQuery:(ATVDataClientRef)query mediaType:(ATVMediaTypeRef)type;	// 0x6911d
- (void)_submitHomeShareDatePlayedQuery:(ATVDataClientRef)query mediaType:(ATVMediaTypeRef)type;	// 0x69215
@end

