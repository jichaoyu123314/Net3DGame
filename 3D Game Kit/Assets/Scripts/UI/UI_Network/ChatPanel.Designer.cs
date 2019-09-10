//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:4.0.30319.42000
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace QFramework.HeNuoApp
{
    using System;
    using System.Collections;
    using System.Collections.Generic;
    using System.Linq;
    using UnityEngine;
    using UnityEngine.UI;
    
    
    public partial class ChatPanel
    {
        
        public const string NAME = "ChatPanel";
        
        [SerializeField()]
        public RectTransform ShowPanel;
        
        [SerializeField()]
        public UnityEngine.UI.Text Content;
        
        [SerializeField()]
        public UnityEngine.UI.InputField InputField_Msg;
        
        [SerializeField()]
        public UnityEngine.UI.Button Button_Send;

        [SerializeField()]
        public UnityEngine.UI.Button Button_Close;

        private ChatPanelData mPrivateData = null;
        
        public ChatPanelData mData
        {
            get
            {
                return mPrivateData ?? (mPrivateData = new ChatPanelData());
            }
            set
            {
                mUIData = value;
                mPrivateData = value;
            }
        }
        
        protected override void ClearUIComponents()
        {
            ShowPanel = null;
            Content = null;
            InputField_Msg = null;
            Button_Send = null;
            Button_Close = null;
            mData = null;
        }
    }
}
