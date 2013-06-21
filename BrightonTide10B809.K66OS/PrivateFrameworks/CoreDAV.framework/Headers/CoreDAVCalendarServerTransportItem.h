/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithHrefChildItem, CoreDAVLeafItem;

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem {
	CoreDAVLeafItem *_apsBundleID;	// 28 = 0x1c
	CoreDAVLeafItem *_courierServer;	// 32 = 0x20
	CoreDAVItemWithHrefChildItem *_subscriptionURL;	// 36 = 0x24
	CoreDAVItemWithHrefChildItem *_tokenURL;	// 40 = 0x28
	CoreDAVLeafItem *_apsEnv;	// 44 = 0x2c
	CoreDAVLeafItem *_refreshInterval;	// 48 = 0x30
	CoreDAVLeafItem *_xmppServer;	// 52 = 0x34
	CoreDAVLeafItem *_xmppURI;	// 56 = 0x38
}
@property(retain) CoreDAVLeafItem *apsBundleID;	// G=0x3371cd55; S=0x3371cd69; @synthesize=_apsBundleID
@property(retain) CoreDAVLeafItem *apsEnv;	// G=0x3371cde5; S=0x3371cdf9; @synthesize=_apsEnv
@property(retain) CoreDAVLeafItem *courierServer;	// G=0x3371cd79; S=0x3371cd8d; @synthesize=_courierServer
@property(retain) CoreDAVLeafItem *refreshInterval;	// G=0x3371ce09; S=0x3371ce1d; @synthesize=_refreshInterval
@property(retain) CoreDAVItemWithHrefChildItem *subscriptionURL;	// G=0x3371cd9d; S=0x3371cdb1; @synthesize=_subscriptionURL
@property(retain) CoreDAVItemWithHrefChildItem *tokenURL;	// G=0x3371cdc1; S=0x3371cdd5; @synthesize=_tokenURL
@property(retain) CoreDAVLeafItem *xmppServer;	// G=0x3371ce2d; S=0x3371ce41; @synthesize=_xmppServer
@property(retain) CoreDAVLeafItem *xmppURI;	// G=0x3371ce51; S=0x3371ce65; @synthesize=_xmppURI
+ (id)copyParseRules;	// 0x3371c781
- (id)init;	// 0x3371c459
// declared property getter: - (id)apsBundleID;	// 0x3371cd55
// declared property getter: - (id)apsEnv;	// 0x3371cde5
// declared property getter: - (id)courierServer;	// 0x3371cd79
- (void)dealloc;	// 0x3371c485
- (id)description;	// 0x3371c561
// declared property getter: - (id)refreshInterval;	// 0x3371ce09
// declared property setter: - (void)setApsBundleID:(id)anId;	// 0x3371cd69
// declared property setter: - (void)setApsEnv:(id)env;	// 0x3371cdf9
// declared property setter: - (void)setCourierServer:(id)server;	// 0x3371cd8d
// declared property setter: - (void)setRefreshInterval:(id)interval;	// 0x3371ce1d
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x3371cdb1
// declared property setter: - (void)setTokenURL:(id)url;	// 0x3371cdd5
// declared property setter: - (void)setXmppServer:(id)server;	// 0x3371ce41
// declared property setter: - (void)setXmppURI:(id)uri;	// 0x3371ce65
// declared property getter: - (id)subscriptionURL;	// 0x3371cd9d
// declared property getter: - (id)tokenURL;	// 0x3371cdc1
// declared property getter: - (id)xmppServer;	// 0x3371ce2d
// declared property getter: - (id)xmppURI;	// 0x3371ce51
@end
