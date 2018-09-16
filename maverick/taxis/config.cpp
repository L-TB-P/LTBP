/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

#define true 1
#define false 0

class maverick_taxis_cfg {
	class pricing {
		pricePerKilometre 					= 500; // Dollars
		basePrice							= 700; // Price at which billing starts, required to call a taxi
		moneyHandVariable					= "life_cash";
		moneyBankVariable					= "life_atmbank";
		paymentSource						= "BOTH";
		fullRefundOnDriverAbort				= true;
	};

	class keybindings {
		keyCode								= 20; // Keycodes can be found at https://community.bistudio.com/wiki/DIK_KeyCodes
		reqShift							= false;
		reqAlt								= true;
		reqCtrl								= false;
	};

	class general {
		automaticNavigation 				= true; // Automatically starts Navigator once the user has to go to a specific point
	};

	class drivers {
		condition 							= "true";
	};

	class localization {
		// Localization
		msgMainInfoNoTaxiCalled	=			"<t size='2'>アクティブなタクシーコールはありません</t><br/><t>[コールタクシー]をクリックしてタクシーリクエストを作成します</t><br/><br/><t font='RobotoCondensedBold'>利用可能なタクシー: %1</t>";
		msgMainInfoNoTaxiYet =				"<t size='2'>タクシーが呼ばれました！</t><br/><t>タクシーはまだあなたのタクシーコールを受諾していません。タクシーが受諾そうしたら通知されます！</t><br/><br/><t font='RobotoCondensedBold'>利用可能なタクシー: %1</t>";
		msgTaxiCalled = 					"タクシーのリクエストが作成されました";
		msgTaxiCancelled = 					"現在のタクシーのリクエストはキャンセルされました";
		msgTaxiFareCancelled =				"あなたは運賃をキャンセルしました";
		msgTaxiCancelConfirm =				"タクシー運転手があなたの要求を受け、あなたの元へ向かっています。キャンセルしてもよろしいですか？";
		msgTaxiCancelHeader	=				"タクシーコールをキャンセル";
		msgTaxiCancelButtonConfirm =		"Yes";
		msgTaxiCancelButtonCancel =			"No";
		msgTaxiCancelDriverConfirm =		"運賃をキャンセルしてもよろしいですか？既に基本価格がお客様に転送されている場合は、再度その価格が顧客に返還されます";
		msgTaxiMeterInfoText = 				"<t>総距離</t><t align='right' font='RobotoCondensedBold'>%1</t><br/><t>時間が経過した</t><t align='right' font='RobotoCondensedBold'>%2</t><br/><t>合計金額 (%3$/km)</t><t align='right' font='RobotoCondensedBold'>%4</t>";
		msgTaxiMeterStatusTextActive = 		"<t align='right' font='RobotoCondensedBold'>ACTIVE</t>";
		msgTaxiMeterStatusTextInactive = 	"<t align='right' font='RobotoCondensedBold'>INACTIVE</t>";
		masTaxiInfoPleaseWait =				"<t size='2'>%1 あなたの元に向かっています</t><br/>現在の場所でお待ちください。彼は現在 %2 離れて</t>";
		msgTaxiFareCancelledAsCustomer =	"タクシー運転手が運賃をキャンセルしました";
		masTaxiFareCancelledAsDriver =		"お客様が運賃をキャンセルしました";
		msgTaxiCallAccepted =				"タクシーはあなたの元へ移動中です";
		msgTaxiDriverNotAvailable =			"タクシー運転手として働くための要件を満たしていません";
		msgTaxiDestinationUpdated =			"目的地が更新されました";
		msgTaxiNoRoadNearFound =			"位置付近の道路セグメントは見つかりませんでした";
		msgTaxiCannotCallWhileDriver =		"タクシー運転手として勤務中にタクシーコールをすることはできません！";
		msgTaxiCannotDriveWhileCalling =	"自分でタクシーコールをしている間は、タクシー運転手として働くことはできません！";
		msgTaxiSpamClickPrevention =		"このアクションをとても速くすることはできません！";
		msgTaxiAlreadyInFare =				"あなたはすでに運賃を受け入れました！";
		msgCallTaxi =						"コールタクシー";
		msgBaseNotAffordable =				"あなたはタクシーを呼び出すのに十分なお金がありません！";
		msgPaidCustomer =					"目的地に到着しました<br/>合計支払額: %1$";
		msgNotFullyPaidCustomer =			"目的地に到着しました あなたは余裕がありませんでした の総量 %1$, 代わりに %2$ （基本料金を除く）が支払われました";
		msgPaidDriver =						"目的地に到着しました<br/>乗客はあなたに支払った <t color='#43a047'>%1$</t>.";
		msgNotFullyPaidDriver =				"目的地に到着しました 乗客はあなたに全額を支払うことができませんでした <t color='#43a047'>%1$</t>, 代わりに <t color='#43a047'>%2$</t> （基本料金を除く）が譲渡されました";
		msgPayCustomer =					"目的地に到着しました<br/>支払額の合計額は %1$.";
		msgPayDriver =						"目的地に到着しました<br/>乗客の支払いは %1$.";
		msgTotalPayment =					"お支払い総額: %1$";
		msgTaximeterPositionSaved =			"タクシーメーターの位置が保存されました";
		msgTaximeterPositionReset =			"タクシーメーター位置のリセット";
		msgTaxiPressSpaceSaveSettings = 	"Press [SPACE] to save";
		msgNowOnDuty =						"現在勤務中。タクシーコールが来たら通知を受け取ります";
		msgNowOffDuty =						"あなたは現在勤務していません";
		msgTaxiMenuActiveCalls =			"アクティブなタクシーコールを見る";
		msgTaxiNewCallCreated = 			"新しいタクシーコールが作成されました";
		msgTaxiBillingPayment =				"駆動距離による合計支払い";
		msgTaxiBillingDriverMissingP =		"顧客が手頃ではない金額";
		msgTaxiBillingBasePrice =			"初乗り運賃";
		msgTaxiBillingCustomerMissingP =	"手頃な価格ではない";
		msgTaxiCurrentFareInformation =		"現在の運賃情報";
		msgTaxiBillingCancelled =			"運賃がキャンセルされた";


		// Tasks
		msgTaskDriverPickupDescription =	"この場所で乗客を拾う";
		msgTaskDriverPickupDescriptionS =	"拾う";
		msgTaskDriverPickupHUD =			"拾う";

		msgTaskCustomerDriverDescription =	"タクシーに乗る";
		msgTaskCustomerDriverDescriptionS =	"乗車";
		msgTaskCustomerDriverHUD =			"乗車";

		msgTaskDriverGoToDescription =		"顧客の目的地";
		msgTaskDriverGoToDescriptionS =		"目的地";
		msgTaskDriverGoToDriverHUD =		"ここへ行く";

		#define dialogCallTaxiTitle			"タクシーサービス"
		#define dialogCancelTaxi			"タクシー要請をキャンセル"
		#define dialogClose					"閉じる"
		#define dialogTaxiMeter				"タクシーメーター"
		#define dialogTaxiFareList			"受諾待ちタクシーコール"
		#define dialogTaxiGoOnDuty			"業務を開始"
		#define dialogTaxiGoOffDuty			"業務を停止"
		#define dialogTaxiAcceptCall		"選択した要請を承諾"
		#define dialogTaxiCancelCall		"現在の要請をキャンセルする"
		#define dialogMenuCustomer			"コールタクシー"
		#define dialogMenuDriver			"タクシードライバーとして働く"
		#define dialogMenuSettings			"設定"
		#define dialogDestination			"目的地"
		#define dialogHowToDestination		"マップ上の位置をダブルクリックして目的地をマークします。既にタクシー運転手が来ている場合、更新された位置が通知されます"
		#define dialogStatusTitle			"コールステータス"
		#define dialogStatusMarkedDest		"目的地選択"
		#define dialogStatusCreatedCall		"タクシーコール作成"
		#define dialogStatusDriverFound		"タクシーコール受諾"
		#define dialogStatusPickedUp		"拾う"
		#define dialogSettingsCustomizePos	"メーターポジション"
		#define dialogSettingsCustomize		"カスタマイズ"
		#define dialogSettingsReset			"リセット"
		#define dialogDragMe				"ドラッグして任意の場所へ移動"
		#define dialogFareSummaryTitle		"運賃概要"
		#define dialogSummaryClosePromt		"[ALT]+[T] で閉じる"
		#define dialogAvaibleDrivers		"勤務中のタクシー"
	};
};

#include "gui\taxi_gui_master.cpp"
