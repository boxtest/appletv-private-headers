/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVDataServer, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVDataClient : XXUnknownSuperclass {
	NSString *_name;	// 4 = 0x4
	unsigned long _clientType;	// 8 = 0x8
	int _status;	// 12 = 0xc
	NSString *_identifier;	// 16 = 0x10
	NSMutableDictionary *_metadataDict;	// 20 = 0x14
	int _maxConcurrentQueryCount;	// 24 = 0x18
	ATVDataServer *_dataServer;	// 28 = 0x1c
}
@property(assign, nonatomic) unsigned long clientType;	// G=0xcfbad; S=0xcfbbd; @synthesize=_clientType
@property(assign) __weak ATVDataServer *dataServer;	// G=0xcfc61; S=0xcfc81; @synthesize=_dataServer
@property(copy, nonatomic) NSString *identifier;	// G=0xcfbf9; S=0xcfc0d; @synthesize=_identifier
@property(assign, nonatomic) int maxConcurrentQueryCount;	// G=0xcfc41; S=0xcfc51; @synthesize=_maxConcurrentQueryCount
@property(retain) NSMutableDictionary *metadataDict;	// G=0xcfc1d; S=0xcfc31; @synthesize=_metadataDict
@property(copy, nonatomic) NSString *name;	// G=0xcfb89; S=0xcfb9d; @synthesize=_name
@property(assign) int status;	// G=0xcfbcd; S=0xcfbe1; @synthesize=_status
- (id)initWithName:(id)name clientType:(unsigned long)type;	// 0xcf091
- (void).cxx_destruct;	// 0xcfc95
- (BOOL)canProcessQueryConcurrently:(id)concurrently;	// 0xcfb11
- (void)cancelImageRequest:(id)request;	// 0xcfb7d
// declared property getter: - (unsigned long)clientType;	// 0xcfbad
- (void)concreteDataClientConnect;	// 0xcfae9
- (void)concreteDataClientDisconnect;	// 0xcfafd
- (void)connect;	// 0xcf3ad
- (void)connectionCompletedWithStatus:(int)status;	// 0xcf3dd
// declared property getter: - (id)dataServer;	// 0xcfc61
- (id)description;	// 0xcf311
- (void)disconnect;	// 0xcf451
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xcfb15
- (BOOL)groupingSupportsProperty:(id)property;	// 0xcfb09
- (unsigned)hash;	// 0xcf2bd
// declared property getter: - (id)identifier;	// 0xcfbf9
- (id)imageRequestWithAsset:(id)asset imageID:(id)anId size:(CGSize)size crop:(BOOL)crop context:(id)context;	// 0xcfb79
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0xcfb81
- (BOOL)isEqual:(id)equal;	// 0xcf1dd
// declared property getter: - (int)maxConcurrentQueryCount;	// 0xcfc41
// declared property getter: - (id)metadataDict;	// 0xcfc1d
// declared property getter: - (id)name;	// 0xcfb89
- (id)networkTestURLWithOptions:(id)options headers:(id *)headers;	// 0xcfb85
- (id)objectForKey:(id)key;	// 0xcfac9
- (BOOL)processQueryAsync:(id)async;	// 0xcfb0d
- (void)queryCompleted:(id)completed withStatus:(unsigned long)status;	// 0xcfa31
- (BOOL)queryFilterSupportsProperty:(id)property;	// 0xcfb05
- (void)setClientStatus:(int)status;	// 0xcf4c5
// declared property setter: - (void)setClientType:(unsigned long)type;	// 0xcfbbd
// declared property setter: - (void)setDataServer:(id)server;	// 0xcfc81
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0xcfc0d
// declared property setter: - (void)setMaxConcurrentQueryCount:(int)count;	// 0xcfc51
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0xcfc31
// declared property setter: - (void)setName:(id)name;	// 0xcfb9d
- (void)setObject:(id)object forKey:(id)key;	// 0xcfa75
// declared property setter: - (void)setStatus:(int)status;	// 0xcfbe1
// declared property getter: - (int)status;	// 0xcfbcd
- (void)submitDataQuery:(id)query priority:(int)priority withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xcf741
- (BOOL)supportsProperty:(id)property;	// 0xcfb01
@end

